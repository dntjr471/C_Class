#include <stdio.h>
#include "MyHeader.h"
//void func1(int key);	//함수의 원형 선언 

int main()
{
	int key;	//키 값을 입력받기 위한 변수 선언 
	int i,j,k;	// 내부 사용 변수(습관 처럼 사용)
	
	while(1)	//무한루프 
	{
		scanf("%c",&key); // 한 문자를 입력받음  *단일 문자>>%c , 문자열>>%s 
		
		if(key==' ') break;	//탈출 조건 먼저 설정 
		if(key != 13) func1(key); 
	} 
}

void func1(int key)
{
	if(key>='A' && key<='Z') // 대문자 검사
	{
		printf(">%c : 대문자\n", key);
	}
	
	else if(key>='a' && key<='z') // 소문자 검사
	{
		printf(">%c : 소문자\n", key);
	}
	
	else if(key>='0' && key<='9') // 숫자 검사
	{
		printf(">%d : 숫자\n", key);
	}
	
	else if((key>=32 && key<=47) || (key>=58 && key<=64) || (key>=91 && key<=96) || (key>=123 && key<=126))
	{
		printf(">%c : 특수문자\n", key);
	}
}

