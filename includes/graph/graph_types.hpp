#ifndef GRAPH_TYPES_HPP_BY_JADESOUL
#define GRAPH_TYPES_HPP_BY_JADESOUL
/**
 * File: graph_types.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-05-07 13:34:12.878000
 * Written In: Peking University, beijing, China$
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <cassert>
using namespace std;


#define for_iter(type, var, iter) for (type var=iter.beg(); !iter.end(); var=iter.nxt())

//abstract vertex type
template< class value_t, class weight_t >
class Vertex {
public:
	int id;//is the index of the vertex list in a graph, used for fast indexing
	value_t value;
	weight_t weight;
	explicit Vertex(value_t value=value_t(), weight_t weight=weight_t()): value(value), weight(weight) { }
	Vertex(const Vertex& r): value(r.value), weight(r.weight) { }
	Vertex& operator =(const value_t& value) {
		Vertex& me=*this;
		me.value=value;
		return me;
	}
	Vertex& operator =(const Vertex& r) {
		Vertex& me=*this;
		if (this!=&r) {
			me.value=r.value;
			me.weight=r.weight;
		}
		return me;
	}
	
	bool operator <(const Vertex& r) const {
		return this->id < r.id;
	}
	
	bool operator >(const Vertex& r) const {
		return this->id > r.id;
	}
	
	bool operator ==(const Vertex& r) const {
		return this->value == r.value && this->weight == r.weight;
	}
	
	bool operator !=(const Vertex& r) const {
		Vertex& me=*this;
		return ! me==r;
	}
	
	friend ostream& operator <<(ostream& o, const Vertex& v) {
		return o<<"<Vertex id="<<v.id<<" value="<<v.value<<" weight="<<v.weight<<"/>"<<endl;
	}
	
	friend istream& operator >>(istream& i, Vertex& v) {
		return i>>v.value>>v.weight;
	}
};



//most common vertex type
typedef Vertex<int, float> V;
typedef vector<V> VS;	//vertice set

class Edge {//representation of a edge in a graph , consist of two vertices
public:
	int u, v;
	explicit Edge(int u=-1, int v=-1): u(u), v(v) {}
	explicit Edge(const Edge& r): u(r.u), v(r.v) {}
	Edge& operator =(const Edge& r) {
		Edge& me=*this;
		if (this!=&r) {
			me.u=r.u;
			me.v=r.v;
		}
		return me;
	}
	bool operator ==(Edge& r) {
		return this->u == r.u && this->v == r.v;
	}
	
	bool operator !=(Edge& r) {
		Edge& me=*this;
		return ! (me==r);
	}
	
	friend ostream& operator <<(ostream& o, const Edge& e) {
		return o<<"<Edge u="<<e.u<<" v="<<e.v<<"/>"<<endl;
	}
	
	friend istream& operator >>(istream& i, Edge& e) {
		return i>>e.u>>e.v;
	}
};

//common edge type
typedef Edge E;
typedef vector<E> ES;	// edge set

//abstrct class for Graph
class Graph {
protected:
	int v_cnt, e_cnt;
	bool is_directed;
	VS vs;//vertex set
	// ES es;//edges set
public:
	// typedef edge_iterator;
	// typename vertex_iterator;
	
	//need vertex size, and is directed graph or not
	explicit Graph(int v_cnt=0, bool is_directed=false): v_cnt(v_cnt), e_cnt(0), is_directed(is_directed), vs(VS(v_cnt)) {
		if (v_cnt==0) return;
		for_n(i, (int)vs.size()) vs[i].id=i;//init all the id
	}
	~Graph() {}
	inline int v_size() const { return v_cnt; }//vertex cnt
	inline int e_size() const { return e_cnt; }//edge cnt
	inline bool directed() const { return is_directed; }//is direct graph or not
	virtual int add(E& e) { return v_cnt; }
	// int add(ES);
	// int add(V);
	// int add(VS);
	virtual int del(E& e) { return v_cnt; }
	// int del(ES);
	// int del(V);
	// int del(VS);
	virtual int add(const V& v) { return v_cnt; }
	virtual int del(const V& v) { return v_cnt; }
	
	void resize(int n_vertex) {
		v_cnt=n_vertex;
		vs.assign(v_cnt, V());
		for_n(i, v_cnt) vs[i].id=i;//init all the id
	}
	
	void clear() {
		v_cnt=e_cnt=0;
		is_directed=false;
		vs.clear();
	}
	
	V& vertex(int ind) {//get a vertex by index
		if (ind<0) ind+=v_cnt;
		assert(ind>=0 && ind<v_cnt);
		return vs[ind];
	}
	
	inline bool is_edge(const V&, const V&);//test if exist edge between two vertex
	
	class adj_iterator {	//adjacent iterator
	public:
		adj_iterator(Graph& g, int id) {}//id hold the current vertex index
		int beg() { return -1; }//init for iteration, return the first adjacent vertex
		int nxt() { return -1; } //get next vertex
		bool end() { return true; } //test if there isn't any more adjacent vertices
	};
	
	VS vertices() {//get all vertices
		VS s(v_cnt);//container size equals all vertex count
		for_n(i, v_cnt) {
			s[i]=vertex(i);
		}
		return s;
	}
	
	ES edges() {//get all edges
		int e=0;//edge count
		ES s(e_cnt);//container size equals all edge count
		
		for_n(u, v_cnt) {//for (int i=0; i<V(); ++i) {
			// V& u=vertex(i);//hold the i th vertex
			
			#define for_adj(graph, vertex, adj) for (adj_iterator it(graph, vertex); V& adj=it.beg(); !it.end(); adj=it.nxt())
			#define for_adj1(graph, vertex, adj) for (adj_iterator it1(graph, vertex); V& adj=it1.beg(); !it1.end(); adj=it1.nxt())
			#define for_adj2(graph, vertex, adj) for (adj_iterator it2(graph, vertex); V& adj=it2.beg(); !it2.end(); adj=it2.nxt())
			#define for_adj3(graph, vertex, adj) for (adj_iterator it3(graph, vertex); V& adj=it3.beg(); !it3.end(); adj=it3.nxt())
			adj_iterator it(*this, u);
			/* for_iter(V&, v, it) { */
			for (int v=it.beg(); !it.end(); v=it.nxt()) {
				if (directed() || u<v) s[e++]=E(u, v);
			}
		}
		return s;
	}
	
};



typedef Graph G;

typedef vector<bool> line;
typedef list<int> link;

class DenseGraph : public Graph {
	vector<line> adj;
public:
	DenseGraph(int v_cnt=0, bool is_directed=false): Graph(v_cnt, is_directed), adj(v_cnt) {
		for_n(i, v_cnt) adj[i].assign(v_cnt, false);
	}
	
	int add(E& e) {	//add a edge
		int u=e.u, v=e.v;
		assert(u>=0 && u<v_cnt && v>=0 && v<v_cnt);
		if (adj[u][v]==false) ++e_cnt;
		adj[u][v]=true;
		if (!is_directed) adj[v][u]=true;
		return e_cnt;
	}
	
	int del(E& e) {	//delete a edge
		int u=e.u, v=e.v;
		if (adj[u][v]==true) --e_cnt;
		adj[u][v]=false;
		if (!is_directed) adj[v][u]=false;
		return e_cnt;
	}
	
	int add(const V& v) {
		assert(v_cnt==vs.size());
		
		vs.push_back(v);
		vs.rend()->id=v_cnt;//set id for last v 
		
		for_n(i, v_cnt) adj[i].push_back(false);//add a false cell for each row
		
		++v_cnt;
		adj.push_back(line());
		adj.rend()->assign(v_cnt, false);	//append line with (v_cnt+1) false for adj
		
		return v_cnt;
	}
	
	int del(const V& v) {
		assert(v.id>=0 && v.id<v_cnt);//v_cnt can not be 0
		
		for_n(i, v_cnt) {//delete cell for each row
			line& l=adj[i];
			l.push_back(false);//add a false cell for each row
			line::iterator it=l.begin();
			for_n(i, v.id) ++it;//move it to the id th elememt
			l.erase(it);
		}
		
		vector<line>::iterator it=adj.begin();
		for_n(i, v.id) ++it;
		adj.erase(it);//delete row
		
		VS::iterator it2=vs.begin();
		for_n(i, v.id) ++it2;
		vs.erase(it2);
		
		--v_cnt;
		
		return v_cnt;
	}
	
	void resize(int n_vertex) {
		Graph::resize(n_vertex);
		adj.assign(v_cnt, line());	//resize adj
		for_n(i, v_cnt) adj[i].assign(v_cnt, false);
	}
	
	void clear() {//clear all v and e
		Graph::clear();
		adj.clear();
	}
	
	bool edge(int u, int v) const {
		return adj[u][v];
	}
	
	class adj_iterator {
		const DenseGraph& g;
		int u, v, size;
	public:
		adj_iterator(const DenseGraph& g, int u): g(g), u(u), v(-1), size(g.v_cnt) { assert(u>=0 && u<size); }
		int beg() { v=-1; return nxt(); }
		int nxt()  {
			for(++v; v<size; ++v) if (g.adj[u][v]==true) return v;
			return -1;
		}
		bool end() { return !(v<size); }
	};
	
	friend ostream& operator <<(ostream& o, DenseGraph& g) {
		o<<"directed:\t"<<boolalpha<<g.is_directed<<endl;
		o<<"vertex count:\t"<<g.v_cnt<<endl;
		o<<"edge count:\t"<<g.e_cnt<<endl;
		o<<endl;
		
		for_n(i, g.v_cnt) {
			o<<g.vs[i];
		}
		o<<endl;
		
		ES es=g.edges();
		for_n(i, g.e_cnt) {
			o<<es[i];
		}
		o<<endl;
		
		for_n(u, g.v_cnt) {
			o<<g.vs[u];
			adj_iterator it(g, u);
			for_iter(int, v, it) {
				o<<"\t"<<g.vs[v];
			}
			o<<endl;
		}
		
		for_n(i, g.v_cnt) {
			for_n(j, g.v_cnt) {
				if (g.adj[i][j]) o<<"‡å";
				else o<<"¿Ú";
			}
			o<<endl;
		}
		o<<endl;
		return o;
	}

	friend istream& operator >>(istream& i, DenseGraph& g) {
		g.clear();
		int n;
		E e;
		i>>g.is_directed;
		i>>n;
		g.resize(n);
		for_n(j, g.v_cnt) i>>g.vs[j];
		i>>n;
		for_n(j, n) {
			i>>e;
			g.add(e);
		}
		return i;
	}
};

typedef DenseGraph graph;

class SparseMultiGraph : public Graph{
	vector<link> adj;
public:
	SparseMultiGraph(int v_cnt=0, bool is_directed=false): Graph(v_cnt, is_directed), adj(v_cnt) {
		adj.assign(v_cnt, link());
	}
	
	int add(E& e) {	//add a edge
		int u=e.u, v=e.v;
		link& l=adj[u];//add u-v
		l.insert(l.end(), v);//should check repeat edge
		++e_cnt;
		if (! is_directed) {//also del v-u
			link& k=adj[v];
			k.insert(k.end(), u);//should check repeat edge
		}
		return e_cnt;
	}
	
	int del(E& e) {	//delete a edge
		int u=e.u, v=e.v;
		link& l=adj[u];
		if (! l.empty()) {
			l.remove(v);	//del u-v
			--e_cnt;
		}
		if (! is_directed) {//also del v-u
			link& k=adj[v];
			if (! k.empty()) {
				k.remove(u);	//del u-v
			}
		}
		return e_cnt;
	}
	
	bool edge(int u, int v) const {
		//return adj[u][v];
	}
	
	// void resize(v_size) {
		// e_cnt=0;
		// clear();
		// Graph(v_cnt, is_directed);
		// adj.assign(v_cnt, link());
	// }
	
	// void clear() {//clear all v and e
		// v_cnt=e_cnt=0;
		// adj.clear();
		// vs.clear();
	// }
	
	class adj_iterator;
	friend class adj_iterator;
};

class SparseMultiGraph::adj_iterator {
	const SparseMultiGraph& g;
	int u, i, size, len;
	const link& l;
	link::const_iterator it;
public:
	adj_iterator(const SparseMultiGraph& g, int u): g(g), u(u), size(g.v_cnt), l(g.adj[u]) {
		assert(u>=0 && u<size);
		len=l.size();
	}
	
	int beg() {
		it=l.begin();
		i=0;
		if (i<len) {
			return *it;
		}
		return -1;
	}
	
	int nxt() {
		if (i<len) {
			++i;
			++it;
			return *it;
		}
		return -1;
	}
	
	bool end() { return !(i<len); }
};

#ifdef jaden

template <class Graph>
clas IO {
public:
	static void show(const Graph&);
	static void scanEZ(Graph&);
	static void scan(Graph&);
};

template <class Graph>
clas CC {
public:
	CC(const Graph&);
	int count();
	bool connect(int, int);
private:
	//
};

#endif


#endif /* GRAPH_TYPES_HPP_BY_JADESOUL */
