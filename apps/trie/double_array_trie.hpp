#ifndef DOUBLE_ARRAY_TRIE_HPP_BY_JADESOUL
#define DOUBLE_ARRAY_TRIE_HPP_BY_JADESOUL
/**
 * File: double_array_trie.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-09-25 16:35:45.762000
 * Written In: Peking University, beijing, China
 */

#include "jade.hpp"
#include "char_code_adaptor.hpp"
#include "trie.hpp"

namespace jade {

	template<class char_t, class code_t>
	class double_array_trie {
	public:
		typedef char_code_adaptor<char_t, code_t> adaptor_t;
		typedef vector<code_t> word_t;
		typedef vector<word_t> wordlist_t;
		typedef trie<char_t, code_t> trie_t;
		typedef map<code_t, wordlist_t> groups_t;
		typedef typename trie_t::node trie_node;
		
		struct node {
			int base, check;
			node():base(0), check(0) {}
		};
		
		typedef vector<node> array_t;
		
	private:
		adaptor_t* adaptor;
		array_t array;
		size_t start_base;
		void init_array() {
			size_t init_len=10;
			array.resize(init_len);
			start_base=1;
		}
		
		void build(wordlist_t& wordlist) {
			dbglog("in datrie build");
			groups_t groups;
			word_t first_codes;
			// dbglog("make groups");
			size_t len=wordlist.size();
			for_tn(uint, i, len) {
				word_t& word=wordlist[i];
				code_t& first=word.front();
				if_not_in(first, groups) {
					groups[first]=wordlist_t();
					first_codes.push_back(first);
				}
				groups[first].push_back(word);
			}
			// dbglog("done make groups");
			
			// dbglog("begin add first codes");
			size_t root=1;
			add_codes(root, first_codes);
			// dbglog("done add first codes");
			
			for_iter(it, groups_t, groups) {
				const code_t& code=it->first;
				// dbglog("for group %d", code);
				wordlist_t& wordlist=it->second;
				trie_t *t=new trie_t(*adaptor, wordlist);
				size_t parent_id=abs(array[root].base)+code;
				build_from_a_trie(parent_id, t->get_root()->first_child());
				delete t;
			}
		}
		
		void build_from_a_trie(size_t parent_id, trie_node* parent) {
			if (parent->children_size()==0) {
				set_as_end_node(parent_id);
			} else {
				word_t codes=parent->get_children_codes();
				add_codes(parent_id, codes);
				size_t len=codes.size();
				for_tn(uint, i, len) {
					code_t& child_code=codes[i];
					trie_node* child=parent->find_child(child_code);
					build_from_a_trie(array[parent_id].base+child_code, child);//recursively build from a trie
				}
				if (parent->end) set_as_end_node(parent_id);
			}
		}
		
		
		
		void add_codes(size_t parent_id, word_t& codes) {
			size_t base=find_next_base(codes);
			// dbglog("find_next_base result: %d", int(base));
			array[parent_id].base=base;
			size_t len=codes.size();
			for_tn(uint, i, len) {
				code_t& code=codes[i];
				array[base+code].check=parent_id;
			}
		}
		
		void set_as_end_node(size_t parent_id) {
			int& base=array[parent_id].base;
			if (base>0) base=-base;
			else if (base==0) base=-1;
		}
		
		size_t find_next_base(word_t& codes) {
			if (codes.size()>1) {
				size_t base=array.size();
				while (! is_this_base_ok(base, codes)) ++base;
				return base;
			} else {
				while (! is_this_base_ok(start_base, codes)) ++start_base;
				return start_base;
			}
		}
		
		bool is_this_base_ok(size_t base, word_t& codes) {
			// dbglog("now check base: %d", int(base));
			size_t len=codes.size();
			for_tn(uint, i, len) {
				code_t& code=codes[i];
				size_t pos=base+code;
				if (! is_this_pos_ok(pos)) return false;
			}
			return true;
		}
		
		bool is_this_pos_ok(size_t pos) {
			// dbglog("now check pos: %d", int(pos));
			auto_expand_array(pos);
			return array[pos].check==0 && array[pos].base==0;
		}
		
		inline void auto_expand_array(size_t pos) {
			while (pos>=array.size()) {
				// dbglog("in auto_expand_array: pos=%u, array.size=%u", pos, array.size());
				array.push_back(node());
			}
		}
		
	public:
		double_array_trie(adaptor_t& adaptor, wordlist_t& wordlist) {
			init_array();
			this->adaptor=new adaptor_t(adaptor);
			build(wordlist);
		}
		
		double_array_trie(vec_str& vs) {
			init_array();
			adaptor=new adaptor_t(vs);
			build(adaptor->get_wordlist(vs));
		}
		
		~double_array_trie() {
			delete adaptor;
		}
		
		bool search(word_t& word) {
			size_t parent=1, child;
			for_tn(uint, i, word.size()) {
				code_t& code=word[i];
				child=abs(array[parent].base)+code;
				if (array[child].check!=parent) return false;
				parent=child;
			}
			return array[parent].base<0;
		}
		
		bool search(string& s) {
			return search(adaptor->get_word(s));
		}
		
		size_t get_array_size() {
			return array.size();
		}
	};
	
}
	
#endif /* DOUBLE_ARRAY_TRIE_HPP_BY_JADESOUL */
