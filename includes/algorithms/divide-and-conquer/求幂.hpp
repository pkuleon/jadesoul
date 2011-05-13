//求a的n次幂


//O(log n)
int get_power(int a, unsigned int n) {
	if (n==1) return a;
	int b=get_power(a, n/2);
	if (n%2==1) return b*b*a;
	else return b*b;
}


map<uint, int> history;
int get_power2(int a, uint n) {
	if (n==0) return 1;
	if (n==1) return a;
	uint half=n/2;
	int b;
	if (history[half]==0) {
		history[half]=b=get_power(a, n/2);
	} else b=history[half];
	if (n%2==1) return b*b*a;
	else return b*b;
}
