#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 13; j++) {
			if (((j <= 6 + i && j >= 6 - i) && (i <= 6))||((j<= 18-i && j>= i-6)&&(i>6)))
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}
