//array1.c
#include <stdio.h>

int main(void)
{
	char buf[10];
	char buf2[10];
	int i=0,j,k;
	
	scanf("%s",buf);
	printf("입력 문자열: %s입니다. \n",buf);
	
	while(buf[i]!=NULL)
	{
		if(buf[i]>=65 && buf[i]<=90) 
		{
			buf2[i] = buf[i] + 32;
		}
		else
		{
			buf2[i] = buf[i] - 32;
	    }
	    i++;
	}
	
    printf("변환 문자열: %s입니다. \n",buf2);
	return 0;
}



///* va_str.c*/
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	char ch;
//	char str[6] = "Hello";
//	
//	printf("--변경 전 문자열--\n");
//	printf("%s \n", str);
//	
//	for(i=0; i<6; i++)
//		printf("%c |", str[i]);
//		
//	/*문자열 변경*/
//	for(i=0; i<3; i++)
//	{
//		
//	 } 
//}
