#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

	int face, frequency[6] = { 0,0,0,0,0,0 };
	srand(time(NULL));

	for (int i = 0; i < 6000; i++) {
		face = rand() % 6 + 1;
		frequency[face - 1] += 1;
	}

	printf("%s%17s\n", "Face", "Frequency");
	for (int i = 0; i < 6; i++) {
		printf("%4d%17d\n", i + 1, frequency[i]);
	}

	system("pause");
	return 0;
}