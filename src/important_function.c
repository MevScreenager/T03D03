#include <stdio.h>
#include <math.h>

double res(double x);

int main(){
	double x;
	scanf("%lf", &x);
	printf("%.1f\n", res(x));
}

double res(double x){
	return 7e-3 * pow(x, 4) + ((22.8 * pow(x, 1/3)  - 1e3) * x + 3) / (x * x / 2) - x * pow(10 + x, 2/x) - 1.01;
}
