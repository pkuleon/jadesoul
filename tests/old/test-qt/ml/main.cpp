#include <ml.hpp>




int main() {
	ifstream fin("data.txt");
	datatable dt(10, 10), x, y, z(3, 3);
	dt.input(fin);
	fin.close();
	dt.print();
	dt.slice(x, 0, 3, 1, 0, 4, 1);
	dt.slice(y, 0, 4, 1, 0, 3, 1);
	cout<<"x="<<endl;
	x.print();
	cout<<"y="<<endl;
	y.print();

	matrix2d<double*> mx(x), my(y), mz(z);
	mx.dot(my, mz);
	z.print();
	mz.zeros(0.123);
	z.print();
	
	// dt2.print();
	// ranger a(100, -1, 2, -2, 1);
	
	
	// double d1[]={1, 2, 3};
	// double d2[]={1, 100, 8};
	// sequence<double*> x(d1, d1+3);
	// sequence<double*> y(d2, d2+3);
	// cout<<x.pearson(y)<<endl;
	

}
