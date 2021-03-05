void func1(int key);

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
