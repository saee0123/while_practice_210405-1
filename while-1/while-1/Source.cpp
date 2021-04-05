#include<iostream>
using namespace std;

void main() {
	int loop = 4;
	while (loop < 10) {
		int innerLoop = 1;
		printf("=====%d ´Ü === \n\n", loop);

		while (innerLoop <= 9) {
			printf("%d*%d = %d\n", loop, innerLoop, loop * innerLoop);
			innerLoop++;
		}
		loop += 4;
	}
	fgetc(stdin);
}