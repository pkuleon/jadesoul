#ifndef HASH_DICT_HPP_BY_JADESOUL
#define HASH_DICT_HPP_BY_JADESOUL
/**
 * File: hash_dict.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-09-29 22:37:27.023000
 * Written In: Peking University, beijing, China
 */

#include "jade.hpp"
#include "char_code_adaptor.hpp"
#include <hash_map>
#include <hash_set>

namespace jade {

	template<class char_t, class code_t>
	class hash_dict {
	public:
		typedef char_code_adaptor<char_t, code_t> adaptor_t;
		typedef vector<code_t> word_t;
		typedef vector<word_t> wordlist_t;
		typedef hash_set<word_t> hash_set_t;
	private:
		adaptor_t* adaptor;
		hash_set_t hs;
	public:
		hash_dict(adaptor_t& adaptor, wordlist_t& wordlist) {
			this->adaptor=new adaptor_t(adaptor);
			build(wordlist);
		}
		
		hash_dict(vec_str& vs) {
			adaptor=new adaptor_t(vs);
			build(adaptor->get_wordlist(vs));
		}
		
		~hash_dict() {
			delete adaptor;
		}
	private:
		void build(wordlist_t& wordlist) {
			for_tn(size_t, i, wordlist.size()) {
				word_t& word=wordlist[i];
				hs.insert(word);
			}
		}
	public:
		bool search(word_t& word) {
			return hs.find(word)!=hs.end();
		}
		
		bool search(string& s) {
			return search(adaptor->get_word(s));
		}
	};

}

#endif /* HASH_DICT_HPP_BY_JADESOUL */
