#include <stdio.h>
#include <math.h>
 
const char * fun();
 
int main() {
	double x, y;
	if (!scanf("%lf %lf", &x, &y))
	{
	printf("n/a");
	return -1;
	}
	printf("%s", fun(x, y));
}

const char * fun(double x, double y){
	if ((pow(x, 2) + pow(y, 2)) < 25) return "GOTCHA";
	return "MISS";
}
