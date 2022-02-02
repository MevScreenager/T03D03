#include <stdio.h>

int sum(int a, int b);
int dif(int a, int b);
int mul(int a, int b);
int pri(int a, int b);

int main()
{
	int x, y;
	if (!scanf("%d %d", &x, &y)) 
	{
	printf("n/a n/a n/a n/a");
	return -1;
	}
	if (y == 0)
	{
		printf("%d %d %d n/a", sum(x, y), dif(x,y), mul(x,y));
	}else{
		printf("%d %d %d %d", sum(x, y), dif(x, y), mul(x,y), pri(x, y));
	}
}

int sum(int a, int b){
    return a + b;
}

int dif(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

int pri(int a, int b){
    return a / b;
}


