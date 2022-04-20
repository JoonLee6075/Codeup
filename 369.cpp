#include <stdio.h>

//K를 한번이라도 출력했다면 1을 반환한다
int PrintK(int value) {
	int temp = 0, hasPrintedK = 0;
	while (value > 0) {
		temp = value % 10;
		if (temp != 0 && temp % 3 == 0) {
			printf("K");
			hasPrintedK = 1;
		}
		value *= 0.1;
	}
	return hasPrintedK;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b); 
	
	for (a; a <= b; a++) {
		if (PrintK(a) != 1) {
			printf("%d", a);
		}
		if(a != b)
			printf("\n", a);
	}
	return 0;
}