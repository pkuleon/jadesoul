#ifndef OTHELLO_HPP_1329021316_29
#define OTHELLO_HPP_1329021316_29
/**
 * File: othello.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-02-12 12:35:16.285000
 * Written In: Peking University, beijing, China
 */

#include "jadesoul.hpp"

namespace othello {

	const int BOARD_SIZE=8;
	const int FIRST_ROW=0;
	const int LAST_ROW=BOARD_SIZE-1;
	const int FIRST_COL=0;
	const int LAST_COL=BOARD_SIZE-1;
	const int STONES_SIZE=BOARD_SIZE * BOARD_SIZE;
	
	enum color {
		EMPTY,
		BLACK,
		WHITE,
		COLOR_SIZE
	};
	
	#define OPPO(C) (C==BLACK?WHITE:BLACK)
	#define COLOR(c) (c=='1'?BLACK:(c=='2'?WHITE:EMPTY))
	
	enum direction {
		RIGHT, 
		RIGHT_DOWN,
		DOWN,
		LEFT_DOWN,
		LEFT,
		LEFT_UP,
		UP,
		RIGHT_UP,
		DIRECTION_SIZE
	};
	
	class position {
	public:
		int x;
		int y;
		position(int x, int y):x(x), y(y) {}
		
		inline friend ostream& operator<<(ostream& o, const position& p) {
			return o<<"("<<p.x+1<<","<<p.y+1<<")="<<"("<<char('A'+p.y)<<","<<p.x+1<<")";
		}
	};
	
	class grid {
	public:
		color c;
		position p;
		grid* next[DIRECTION_SIZE];
		
		grid(position p, color c=EMPTY):p(p), c(c) {}
		
		inline friend ostream& operator<<(ostream& o, const grid& g) {
			if (g.c==EMPTY) return o<<"-";
			else if (g.c==BLACK) return o<<"X";
			else return o<<"O";
		}
	};

	typedef ::list<grid*> array;
	typedef ::set<grid*> collection;
	
	class board {
		grid* m[BOARD_SIZE][BOARD_SIZE];
		
	public:
		friend class move;
		
		board() {
			allocate();
			init();
			update_next();
		}
		
	private:
		void allocate() {
			for_n(i, BOARD_SIZE) for_n(j, BOARD_SIZE) m[i][j]=new grid(position(i, j));
		}
		
		void clear() {}
		
		void init() {
			at8(4, 4).c=WHITE;
			at8(5, 5).c=WHITE;
			at8(5, 4).c=BLACK;
			at8(4, 5).c=BLACK;
		}
		
		void update_next() {
			for_n(i, BOARD_SIZE) for_n(j, BOARD_SIZE) {
				at(i, j).next[UP]			=	(i==FIRST_ROW)?NULL:ptr(i-1, j);
				at(i, j).next[DOWN]		=	(i==LAST_ROW)?NULL:ptr(i+1, j);
				at(i, j).next[LEFT]		=	(j==FIRST_COL)?NULL:ptr(i, j-1);
				at(i, j).next[RIGHT]		=	(j==LAST_COL)?NULL:ptr(i, j+1);
				at(i, j).next[RIGHT_UP]	=	(i==FIRST_ROW OR j==LAST_COL)?NULL:ptr(i-1, j+1);
				at(i, j).next[RIGHT_DOWN]=	(i==LAST_ROW OR j==LAST_COL)?NULL:ptr(i+1, j+1);
				at(i, j).next[LEFT_DOWN]	=	(i==LAST_ROW OR j==FIRST_COL)?NULL:ptr(i+1, j-1);
				at(i, j).next[LEFT_UP]		=	(i==FIRST_ROW OR j==FIRST_COL)?NULL:ptr(i-1, j-1);
			}
		}
	public:
		
		inline grid& at(int i, int j) { return *(m[i][j]); }
		inline grid& at8(int i, int j) { return *(m[i-1][j-1]); }
		inline grid& at(position& p) { return at(p.x, p.y); }
		inline color get_color(position& p) { return at(p).c; }
		inline grid* ptr(int i, int j) { return m[i][j]; }
		inline grid* ptr(position& p) { return ptr(p.x, p.y); }
		
		inline friend ostream& operator<<(ostream& o, board& b) {
			o<<"  A B C D E F G H"<<endl;
			for_n(i, BOARD_SIZE) {
				o<<i+1<<' ';
				for_n(j, BOARD_SIZE) {
					o<<b.at(i, j)<<' ';
				}
				o<<i+1<<endl;
			}
			o<<"  A B C D E F G H"<<endl;
			return o<<endl;
		}
		
		void play(position& p, color c, array* eats=NULL) {
			assert(is_empty(p));
			grid* w=ptr(p);
			w->c=c;
			array tmp;
			color o=OPPO(c);
			for_n(d, DIRECTION_SIZE) {
				tmp.clear();
				grid* g=w;
				g=g->next[d];
				if (g==NULL OR g->c!=o) continue;
				for (; g!=NULL && g->c==o; g=g->next[d]) tmp.append(g);
				if (g!=NULL && g->c==c) {
					assert(!tmp.empty());
					for_iter(it, array, tmp) {
						grid* h=*it;
						if (NULL!=eats) eats->append(h);	//record the stone
						h->c=c;	//flip the stone
					}
				}
			}
		}

		void backup(color data[BOARD_SIZE][BOARD_SIZE]) {
			for_n(i, BOARD_SIZE) for_n(j, BOARD_SIZE) data[i][j]=at(i, j).c;
		}
		
		void restore(const color data[BOARD_SIZE][BOARD_SIZE]) {
			for_n(i, BOARD_SIZE) for_n(j, BOARD_SIZE) at(i, j).c=data[i][j];
		}
		
		void recover(const char* s) {
			for_n(i, BOARD_SIZE) for_n(j, BOARD_SIZE) at(i, j).c=COLOR(s[i*BOARD_SIZE+j]);
		}
		
		inline bool is_black(position& p) { return get_color(p)==BLACK; }
		inline bool is_white(position& p) { return get_color(p)==WHITE; }
		inline bool is_empty(position& p) { return get_color(p)==EMPTY; }
		
	};
	
	typedef double evaluation;
	
	class move {
	public:
		board* pb;//unique board ptr
		
		// A-background: the previous move, (null for first move)
		move* prev;
		//before move, stones to store all our stones
		array mime;
		array yours;
		// and how about my mobility
		collection mobilities;
		
		// B-action: where and what color to move
		position p;
		const color c;
		
		// C-result: dring the move, how many can be eated, and
		array eats;
		//and after the move, how much is your mobility, how about the new background
		//can be stored in a new move object
		move* next;
		//and how much is the evaluation of this move(and more, how much time it has cost)
		evaluation e;
	
		bool pass;//pass or not for this move
		
		move(color c, board& b): //only for the first move
			prev(NULL), next(NULL), pb(&b),
			p(0, 0), c(c), e(0.0), pass(true) {
			update_board();
			update_moblities();
		}
		
		move(move& last):
			prev(&last), next(NULL), pb(last.pb),
			p(0, 0), c(OPPO(last.c)), e(0.0), pass(true) {
		}
		
		~move() {
			if (next) delete next;
			if (prev) prev->next=NULL;
		}
		
		inline bool no_any_move() { return mobilities.size()==0; }
		inline bool is_legal_move() { return is_in(pb->ptr(p), mobilities); }
		inline bool not_legal_move() { return !is_legal_move(); }
		
		void update_board() {// step 1
			board& b=*pb;
			// update board stons info
			for_n(i, BOARD_SIZE) for_n(j, BOARD_SIZE) {
				color gc=b.at(i, j).c;
				if (gc==EMPTY) continue;
				if (gc==c) mime.append(b.ptr(i, j));
				else yours.append(b.ptr(i, j));
			}
		}
		
		void update_moblities() {// step 2
			mobilities.clear();
			// cout<<"in update_moblities, c="<<c<<endl;
			for_iter(it, array, mime) {
				grid* cur=*it;
				color o=OPPO(c);
				for_n(d, DIRECTION_SIZE) {
					grid* g=cur;
					g=g->next[d];
					if (g==NULL OR g->c!=o) continue;//first oppo piece 
					for (; g!=NULL AND g->c==o; g=g->next[d]); //skip all oppos
					if (g!=NULL && g->c==EMPTY) {
						mobilities.add(g);
						// cout<<"mobilities.add"<<g->p<<endl;
					}
				}
			}
		}
		
		void update_result() {// step 3
			board& b=*pb;
			if (next) delete next;
			next=new move(*this);
			color data[BOARD_SIZE][BOARD_SIZE];
			b.backup(data);
			assert(is_legal_move());
			eats.clear();
			b.play(p, c, &eats);
			next->update_board();
			next->update_moblities();
			b.restore(data);
		}
		
		move* generate_move() {
			if (mobilities.empty()) return NULL;
			position best_pos(0, 0);
			evaluation max_eval=0;
			// print(max_eval);
			// print(best_pos);
			// print(mobilities.size());
			// print(pass);
			for_iter(it, collection, mobilities) {
				// print(p)
				grid& g=**it;
				p=g.p;
				update_result();
				evaluate_move();
				// print(e);
				if (pass OR e>max_eval) {
					max_eval=e;
					best_pos=p;
					pass=false;
				}
				// print(max_eval);
				// print(best_pos);
				// print(pass);
			}
			if (p.x!=best_pos.x AND p.y!=best_pos.y) {
				p=best_pos;
				e=max_eval;
				update_result();
			}
			return next;
		}
		
		void evaluate_move() {
			e=1.0*next->mobilities.size() - 1.0*mobilities.size();
			// e=1.0*next->mobilities.size();
		}
	};
	
	
	const char* odk_gen_move(char* s) {
		board b;
		b.recover(s);
		// cout<<b;
		color c=COLOR(s[64]);
		// cout<<"turn="<<c<<" "<<(c==BLACK?"BLACK":"WHITE")<<endl;
		move m(c, b);
		// cout<<"m.mobilities:"<<endl;
		// for_iter(it, collection, m.mobilities) {
			// grid& g=**it;
			// print(g.p);
		// }
		// print(m.mime.size());
		// print(m.yours.size());
		move* next=m.generate_move();
		if (next==NULL) {
			s[0]='2';
			s[1]=0;
			// cout<<"we pass"<<endl;
		} else {
			// cout<<m.p<<endl;
			s[0]=m.p.x+'1';
			s[1]=m.p.y+'1';
			s[2]=0;
		}
		return s;
	}	
}

#endif /* OTHELLO_HPP_1329021316_29 */
