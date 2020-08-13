#include <iostream>
#include <math.h>
int main(int argc, char** argv) {
	int i, a , d;
	int n = 0;
	int y = 0;
	float sum = 0;
	float x, s;
	scanf_s("%d %d", &i, &a);
	if (i < a) {
		for (i != a; i <= a;) {
			printf("%d ", i);
			n += 1;
			sum += i;
			s = sum / n;
			y += (i * i);
			d = sum * sum;
			i = ++i;
		}
	}
	else {
		for (i != a; i >= a;) {
			printf("%d ", i);
			n += 1;
			sum += i;
			s = sum / n;
			y += (i * i);
			d = sum * sum;
			i = --i;
		}
	}
	printf("\nAverage = %.2f", sum / n);
	x = sqrt(((n * y) - (sum * sum)) / (n * (n - 1)));
	printf("\nSD = %.2f", x);
	//	printf ("\nfirst%d",(n*y)-d);
	//	printf ("\nsecond%d",n*(n-1));
	//	printf("\n y=%d",y);
	//	printf("\n d=%d",d);
	//	printf("\n s=%.2f",s);
	//	printf("\n n=%d",n);
	return 0;
}