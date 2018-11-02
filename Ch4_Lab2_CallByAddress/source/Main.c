#include<stdio.h>
#include<stdlib.h>
int addbyone(int *i);

int main(void) {

	int x = 100, y = 0;

	y = addbyone(&x);
	printf("x=%d\n",y);

	system("pause");
	return 0;
}
int addbyone(int *i) {
	(*i)++;
	printf("*xptr=%d\n", *i);
	return *i;
}