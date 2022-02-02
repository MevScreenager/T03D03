#include <stdio.h>

int max(int a, int b);

int main(){
	double x, y;
	if (!scanf("%lf %lf", &x, &y))
	{
	printf("n/a");
	return -1;
	}
	if (((int) x  != x) && ((int) y != y ) ){
		printf("n/a");
		return -1;
	}
	printf("%d", max(x, y));
}

int max(int a, int b){
	if (a > b) return a;
	return b;
}
