#include <stdio.h>

int main() {
	int X;
	double Y;
	scanf("%d %lf", &X, &Y);
	if(X % 5 == 0 && X + 0.5 <= Y)
		printf("%.2f", Y - X - 0.5);
	else 
		printf("%.2f", Y);
	return 0;
}

