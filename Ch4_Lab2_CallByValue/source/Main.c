#include<stdio.h>
#include<stdlib.h>
int addbyone(int i);

int main(void) {

	int x = 100, y = 0;

	y = addbyone(x);
	printf("x=%d\n", x);

	system("pause");
	return 0;
}
int addbyone(int i) {

	i++;
	printf("x=%d\n", i);
	return i;
}