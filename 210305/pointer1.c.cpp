/*pointer1.c*/ 
#include <stdio.h>
 
int main(void)
{
	int aa=2000;
	int a=2005;
	int b=2021; 
	int*pA=&a;
	void *vp;
	
	printf("pA : %08x \n", pA);		//%08x : 8�ڸ��� 16���� ǥ�� 
	printf("&a : %08x \n", &a);		// 08 -> �� ������ 0���� ä�� 
	
	(*pA)++;	//a++ �� ���� �ǹ�
	
	printf("  a : %d \n", a);
	printf("*pA : %d \n", *pA);
	
//	pA++;		// a������ ���� �ּ�
	vp = pA++;
	printf("pA : %08x \n", pA);
	printf("*pA : %d \n", *pA);
	printf("vp : %08x \n", vp++);
	printf("vp : %08x \n", vp++);
	
	return 0;
}
