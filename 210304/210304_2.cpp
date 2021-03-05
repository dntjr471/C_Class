#include <stdio.h>
#include <conio.h>

int main(void)
{
	char buf[1024];
	int i,j,k;
	
	scanf("%s",buf);
	printf("입력하신 문자는 %s 입니다.\n",buf);
	
	while(1)
	{
		char ch = getch()-48;
		printf("%c",buf[ch]);
	}
	
	return 0;
}
