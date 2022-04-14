#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>

int main()
{
	int a, e, i, o, u;
	a = e= i = o = u = 0;

	char ch;
	printf("«Î ‰»Î◊÷∑˚¥Æ£∫");
	while ((ch = getchar()) !=  '\n') {

		switch (ch) {
		case 'a':
		case 'A':
			a++;break;
		case 'e':
		case 'E':
			e++;break;
		case 'i':
		case 'I':
			i++;break;
		case 'o':
		case 'O':
			o++;break;
		}
		

	}

	printf("∆‰÷–:a(% d), e(% d), i(% d), o(% d), u(% d)\n", a, e, i, o, u);
	return 0;
}