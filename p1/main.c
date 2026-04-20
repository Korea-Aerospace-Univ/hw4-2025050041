#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {

	int input = 0, target = 0, count = 0;

	scanf("%d", &target);

	do {
		scanf("%d", &input);

		if (target < input) {
			printf("%d>?\n",input);
		}

		else if (target > input) {
			printf("%d<?\n",input);
		}

		count += 1;
	} while (target != input);

	printf("%d==?\n",input);
	printf("%d", count);

	return 0;
}
