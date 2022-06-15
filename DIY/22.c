//求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加由键盘控制。

#include <stdio.h>

int main(){
	int a;
	int n;
	int i;
	int sum=0;	//int m;时被赋值为1,a和k等也是如此 
	int k;
	printf("请输入a的大小和数的个数：");
	scanf("%d %d", &a, &n);
	k=a;
	for(i=1;i<=n;i++){
		sum+=k;
		a=a*10;
		k+=a;
	}
	printf("a+aa+aaa+....=%d", sum);
	return 0;
}


