#ifndef ML_CLUSTER_HPP_BY_JADESOUL
#define ML_CLUSTER_HPP_BY_JADESOUL
/**
 * File: ml_cluster.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-05-07 13:28:15.435000
 * Written In: Peking University, beijing, China$
 */

#include "jade.hpp"


// #define forever FOREVER
// #define FOREVER         for (;;)

// #define for_n(i, n) for (int i=0; i<n; ++i)
// #define for_tn(type, i, n) for (type i=0; i<n; ++i)

// #define for_in(i, start, end, step) for (int i=start; i<end; i+=step)
// #define for_tin(type, i, start, end, step) for (type i=start; i<end; i+=step)


/* // load a file into memory
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  int length;
  char * buffer;

  ifstream is;
  is.open ("test.txt", ios::binary );

  // get length of file:
  is.seekg (0, ios::end);
  length = is.tellg();
  is.seekg (0, ios::beg);

  // allocate memory:
  buffer = new char [length];

  // read data as a block:
  is.read (buffer,length);

  is.close();

  cout.write (buffer,length);

  delete[] buffer;
  return 0;
} */


typedef double data_t;
typedef vector<data_t> example;
typedef vector<example> examples;

void input_examples(istream& in, examples& ds) {
	data_t data;
	string s;
	int rows=0, cols=0, i;
	while(getline(in, s)) {
		ds.push_back(datarow());
		i=0;
		istringstream ins(s);
		cout<<rows<<" ";
		while(ins>>data) {
			++i;
			cout<<data<<" ";
			ds[rows].push_back(data);
		}
		cout<<endl;
		if (cols==0) cols=i;
		else assert(cols==i);
		++rows;
	}
}

typedef double (*distance_func)(examples&, examples&);

double euclidean_distance(examples&, examples&) {
	//
}

void kmeans_cluster(examples& ds, int k, distance_func dist_func) {
	//
	
}

//much more need to implement
//matric manipulations
//distances caculation




#endif /* ML_CLUSTER_HPP_BY_JADESOUL */
