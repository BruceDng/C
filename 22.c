//��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������ɼ��̿��ơ�

#include <stdio.h>

int main(){
	int a;
	int n;
	int i;
	int sum=0;	//int m;ʱ����ֵΪ1,a��k��Ҳ����� 
	int k;
	printf("������a�Ĵ�С�����ĸ�����");
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


