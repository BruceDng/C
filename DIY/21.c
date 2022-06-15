//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

#include <stdio.h>
int main(){
	char c;
	int letters=0;
	int spaces=0;
	int digits=0;
	int others=0;
	printf("请输入一些字母：");
	while((c=getchar())!='\n')	//getchar()返回用户输入的字符ASCLL码（int） 
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
	printf("字母=%d,数字=%d,空格=%d,其他=%d\n",letters,digits,spaces,others);
	return 0;
}
