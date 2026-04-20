#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
	
	int n = 0, num_count = 0, char_count = 0, max_num_count = 0, max_char_count = 0,i = 0;
	char input = '\0';
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf(" %c", &input);
//		scanf("%c", &input); getchar();
		if ('a' <= input && input <= 'z') {
			char_count += 1;
			num_count = 0;
		}
		else if ('0' <= input && input <= '9') {
			char_count = 0;
			num_count += 1;
		}

		if (num_count >= max_num_count) {
			max_num_count = num_count;
		}
		if (char_count >= max_char_count) {
			max_char_count = char_count;
		}
	}

	printf("%d\n%d", max_char_count, max_num_count);

	return 0;
}
