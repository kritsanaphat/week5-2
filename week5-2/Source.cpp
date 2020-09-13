#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char x[100];
	int y, i = 0, y1, sum = 0;
	char* p1;
	scanf("%s", x);
	y = strlen(x);
	y1 = y;
	if (y == 1 || y % 2 == 0) {
		printf("Not Palindrome");
	}
	else {
		p1 = x;
		for (i = 0; i < (y / 2); i++) {
			if (*p1 == x[y1 - 1]) {
				sum = sum + 1;
			}
			p1++;
			y1--;
		}
	}
	if (sum == (y / 2)) {
		printf("Palindrome");
	}
	else printf("Not Palindrome");
}