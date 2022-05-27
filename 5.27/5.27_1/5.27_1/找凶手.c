#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int A(int cri) 
{
	if (cri == 1)
		return 0;
	else
		return 1;
}
int B(int cri)
{
	if (cri == 1 || cri==2 || cri==4)
		return 0;
	else
		return 1;
	
}
int C( int cri)
{
	if (cri == 1 || cri == 2 || cri == 3)
		return 0;
	else
		return 1;
}
int D( int cri)
{
	if (cri == 4)
		return 0;
	else
		return 1;
}
int main()
{
	int ture = 0;
	for (int i = 1; i <= 4; i++) {
		if (A(i) + B(i) + C(i) + D(i) == 3) {
			printf("Ğ×ÊÖÊÇ£º%c", 'A' + i - 1);
		}
	}

	return 0;
}