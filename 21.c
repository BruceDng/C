//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����

#include <stdio.h>
int main(){
	char c;
	int letters=0;
	int spaces=0;
	int digits=0;
	int others=0;
	printf("������һЩ��ĸ��");
	while((c=getchar())!='\n')	//getchar()�����û�������ַ�ASCLL�루int�� 
	{
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
			letters++;
		else if(c>='0'&&c<='9')
			digits++;
		else if(c==' ')
			spaces++;
		else
			others++;
	}
	printf("��ĸ=%d,����=%d,�ո�=%d,����=%d\n",letters,digits,spaces,others);
	return 0;
}