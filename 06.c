#include <stdio.h> 
int main()
{
	const int MINOR = 35;
	int age = 0;
	
	printf("������������䣺");
	scanf("%d", &age);
	
	printf("���������%d�ꡣ\n", age);
	
	if(age<MINOR) 
	{
		printf("���������õġ�");
	}else{
	printf("�����������ľ������磬�ú���ϧ�ɣ�\n");
	}
	return 0; 
}