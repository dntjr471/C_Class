#include <stdio.h>
#include <conio.h>

int main(void)
{
	char buf[1024];
	int i,j,k;
	
	scanf("%s",buf);
	printf("�Է��Ͻ� ���ڴ� %s �Դϴ�.\n",buf);
	
	while(1)
	{
		char ch = getch()-48;
		printf("%c",buf[ch]);
	}
	
	return 0;
}
