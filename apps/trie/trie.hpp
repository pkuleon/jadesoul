#ifndef TRIE_HPP_BY_JADESOUL
#define TRIE_HPP_BY_JADESOUL
/**
 * File: trie.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-09-24 09:39:37.230000
 * Written In: Peking University, beijing, China
 */

#include "jade.hpp"
#include "char_code_adaptor.hpp"

namespace jade {

	template<class char_t, class code_t>
	class trie {
	public:
		typedef char_code_adaptor<char_t, code_t> adaptor_t;
		typedef vector<code_t> word_t;
		typedef vector<word_t> wordlist_t;
		
		struct node {
			typedef map<code_t, node*> subnode_map_t;
			
			subnode_map_t* children;
			bool end;
			
			node() {
				children=NULL;
				end=false;
			}
			
			~node() {
				if (children!=NULL) {
					subnode_map_t& mp=*children;
					for_iter(it, subnode_map_t, mp) delete it->second;
					delete children;
					children=NULL;
				}
			}
			
			void check_alloc_children_map() {
				if (children==NULL) {
					children=new subnode_map_t;
					assert(children!=NULL);
				}
			}
			
			node* find_child(code_t code) {
				if (children!=NULL) {
					typename subnode_map_t::iterator it=children->find(code);
					if (it!=children->end()) return it->second;
				}
				return NULL;
			}
			
			node* first_child() {
				assert(children!=NULL);
				return children->begin()->second;
			}
			
			size_t children_size() {
				if (children==NULL) return 0;
				return children->size();
			}
			
			word_t get_children_codes() {
				word_t codes;
				assert(children!=NULL);
				for_iter(it, subnode_map_t, (*children)) {
					codes.push_back(it->first);
				}
				return codes;
			}
		};
		
	private:
		adaptor_t* adaptor;
		node* root;
		
		// friend class double_array_trie<char_t, code_t>;
	public:
		trie(adaptor_t& adaptor, wordlist_t& wordlist) {
			this->adaptor=new adaptor_t(adaptor);
			build(wordlist);
		}
		
		trie(vec_str& vs) {
			adaptor=new adaptor_t(vs);
			build(adaptor->get_wordlist(vs));
		}
		
		~trie() {
			delete adaptor;
			delete root;
		}
		
		node* get_root() const {
			return root;
		}
	private:
		void build(wordlist_t& wordlist) {
			root=new node;
			for_tn(size_t, i, wordlist.size()) {
				word_t& word=wordlist[i];
				node* p=root;
				node* child;
				for_tn(size_t, j, word.size()) {
					code_t& code=word[j];
					child=p->find_child(code);
					if (child==NULL) {
						p->check_alloc_children_map();
						child=new node;
						(*p->children)[code]=child;
					}
					p=child;
				}
				p->end=true;
			}
		}
		
	public:
		bool search(word_t& word) {
			node* p=root;
			node* child;			
			for_tn(uint, i, word.size()) {
				code_t& code=word[i];
				child=p->find_child(code);
				if (child)
					p=child;
				else
					return false;
			}
			return p->end;
		}
		
		bool search(string& s) {
			return search(adaptor->get_word(s));
		}
	};
}

#endif /* TRIE_HPP_BY_JADESOUL */
