#include <stdio.h>
#include "MyHeader.h"
//void func1(int key);	//�Լ��� ���� ���� 

int main()
{
	int key;	//Ű ���� �Է¹ޱ� ���� ���� ���� 
	int i,j,k;	// ���� ��� ����(���� ó�� ���)
	
	while(1)	//���ѷ��� 
	{
		scanf("%c",&key); // �� ���ڸ� �Է¹���  *���� ����>>%c , ���ڿ�>>%s 
		
		if(key==' ') break;	//Ż�� ���� ���� ���� 
		if(key != 13) func1(key); 
	} 
}

void func1(int key)
{
	if(key>='A' && key<='Z') // �빮�� �˻�
	{
		printf(">%c : �빮��\n", key);
	}
	
	else if(key>='a' && key<='z') // �ҹ��� �˻�
	{
		printf(">%c : �ҹ���\n", key);
	}
	
	else if(key>='0' && key<='9') // ���� �˻�
	{
		printf(">%d : ����\n", key);
	}
	
	else if((key>=32 && key<=47) || (key>=58 && key<=64) || (key>=91 && key<=96) || (key>=123 && key<=126))
	{
		printf(">%c : Ư������\n", key);
	}
}

