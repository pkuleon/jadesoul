#ifndef CHAR_CODE_ADAPTOR_HPP_BY_JADESOUL
#define CHAR_CODE_ADAPTOR_HPP_BY_JADESOUL
/**
 * File: char_code_adaptor.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-09-25 15:57:16.444000
 * Written In: Peking University, beijing, China
 */

#include "jade.hpp"
// #include <hash_map>

namespace jade {
	
	template<class char_t, class code_t>
	class char_code_adaptor {
		typedef vector<code_t> table_t;
		// typedef hash_map<const char_t, const code_t> map_t;
		typedef map<char_t, code_t> map_t;
		typedef vector<code_t> word_t;
		typedef vector<word_t> wordlist_t;
		
		table_t code_to_char;
		map_t char_to_code;
		size_t table_size;
		
		template<class char_iterator_t>
		void construct_from_iterator(char_iterator_t begin, char_iterator_t end) {
			table_size=0;
			code_to_char.push_back(0);		//special char for the end mark, code is 0
			for (; begin!=end; begin++) {
				++table_size;
				code_to_char.push_back(*begin);
				char_to_code[*begin]=table_size;
			}
			assert(table_size>0);
		}
		
	public:
		char_code_adaptor(char_t* begin, char_t* end) {
			construct_from_iterator(begin, end);
		}
		
		char_code_adaptor(vec_str& vs) {
			std::set<char_t> char_set;
			for_iter(its, vec_str, vs) {
				string& s=*its;
				for_iter(itc, string, s) {
					char_t& c=*itc;
					if_not_in(c, char_set) char_set.insert(c);
				}
			}
			construct_from_iterator(char_set.begin(), char_set.end());
		}
		
		word_t get_word(string& s) {
			word_t word;
			for_iter(it, string, s) {
				word.push_back(get_code(*it));
			}
			return word;
		}
		
		wordlist_t get_wordlist(vec_str& vs) {
			wordlist_t wordlist;
			for_iter(it, vec_str, vs) {
				wordlist.push_back(get_word(*it));
			}
			return wordlist;
		}
		
		char_t get_char(code_t code) {
			assert(code>=1 && code <=table_size);
			return code_to_char[code];
		}
		
		code_t get_code(char_t ch) {
			typename map_t::iterator it=char_to_code.find(ch);
			if (it==char_to_code.end()) return 0;	//not found, return special code
			return it->second;
		}
	};

}

#endif /* CHAR_CODE_ADAPTOR_HPP_BY_JADESOUL */
