// #include <iostream>

void swap(int* a, int* b) {
	int c=*a;
	*a=*b;
	*b=c;
}

int main () {
	int a=2, b=1;
	swap(&a, &b);
	return 65535;
}