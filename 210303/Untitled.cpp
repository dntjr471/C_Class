#include <stdio.h>

int main (void)
{
	int n;
	printf("숫자를 입력하세요: \n");
	scanf("%d", &n);
	
//	if (n==1)
//		printf("Answer is %s\n", "One");
//	else if (n==2)
//		printf("Answer is \n", "Two");
//	else if (n==3)
//		printf("Answer is \n", "Three");
//	else if (n==4)
//		printf("Answer is \n", "Four");
//	else if (n==5)
//		printf("Answer is \n", "Five");
//	else if (n==6)
//		printf("Answer is \n", "Six");
//	else if (n==7)
//		printf("Answer is \n", "Seven");
//	else if (n==8)
//		printf("Answer is \n", "Eight");
//	else if (n==9)
//		printf("Answer is \n", "Nine");
//    else 
//		printf("Answer is \n", "Zero");
		
		switch(n)
		{
			case 1:
			printf("Answer is %s\n", "One");
			break;
					
			case 2:
			printf("Answer is %s\n", "Two");
			break;
		
			case 3:
			printf("Answer is %s\n", "Three");
			break;
			
			case 4:
			printf("Answer is \n", "Four");
			break;
			
			case 5:
			printf("Answer is \n", "Five");
			break;
			
			case 6:
			printf("Answer is \n", "Six");
			break;
			
			case 7:
			printf("Answer is \n", "Seven");
			break;
			
			case 8:
			printf("Answer is \n", "Eight");
			break;
			
			case 9:
			printf("Answer is \n", "Nine");
			break;
		}
		
		
}
