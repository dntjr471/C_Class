#include <stdio.h>

int main()
{
	int Num;
	
	while(1)
	{		
		printf("Insert Number. Insert 0 want to end\n");
		scanf("%d",&Num);
		
		if(Num == 0)
		break; 
		
		switch(Num)
		{
			case 1:
				printf(">1 : One\n");
				break;				
			case 2:
				printf(">2 : Two\n");
				break;
			case 3:
				printf(">3 : Three\n");
				break;				
			case 4:
				printf(">4 : Four\n");
				break;				
			case 5:
				printf(">5 : Five\n");
				break;				
			case 6:
				printf(">6 : Six\n");
				break;
			case 7:
				printf(">7 : Seven\n");
				break;
			case 8:
				printf(">8 : Eight\n");
				break;
			case 9:
				printf(">9 : Nine\n");
				break;
			default:
				printf("End\n");
			break;	
			
		}
	}
}

{
	for(int i=0; i<10; i++)
	{
			switch(i)
		{
			case 1:
				printf(">1 : One\n");
				break;				
			case 2:
				printf(">2 : Two\n");
				break;
			case 3:
				printf(">3 : Three\n");
				break;				
			case 4:
				printf(">4 : Four\n");
				break;				
			case 5:
				printf(">5 : Five\n");
				break;				
			case 6:
				printf(">6 : Six\n");
				break;
			case 7:
				printf(">7 : Seven\n");
				break;
			case 8:
				printf(">8 : Eight\n");
				break;
			case 9:
				printf(">9 : Nine\n");
				break;
			default:
				printf("End\n");
			break;	
		}
	}
}

