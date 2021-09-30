#include <stdio.h>

int main() {
	//100명, 100글자 이내 이름
	char name[100][100];
	int n;
	scanf("%d", &n);

	//getchar로 입력 버퍼 초기화
	getchar();

	for (int i = 0; i < n; i++)
	{
		gets(name[i]);

		int j;
		//이름 문자열의 끝을 찾는다
		for (j = 0; name[i][j] != '\0'; j++);
		//거꾸로 출력한다
		for (j--; j >= 0; j--)
			printf("%c", name[i][j]);
		printf("\n");
	}
	return 0;
}