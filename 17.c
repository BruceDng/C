//��ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ��� ����
//���磺153��һ��"ˮ�ɻ���"����Ϊ153=1�����η���5�����η���3�����η���
#include <stdio.h>
#include <math.h>
int main(){
	int i;
	int a;
	int b;
	int c;
	int d;
	for(i=100;i<1000;i++){
		a=i/100;
		b=(i%100)/10;
		c=i%10;
		//d=a^3+b^3+c^3;	C�����е����η�����������ʾ�ģ���ͨ������<math.h>ͷ�ļ���ʹ��pow(x,3)��ʵ��
		//d=a*a*a+b*b*b+c*c*c;	yes
		d=pow(a,3)+pow(b,3)+pow(c,3);//ok
		if(d==i){
			printf("%d��һ��ˮ������\n", i);
		}
	}
	return 0;
}

/*	Reference Version 
#include<stdio.h>
 
int main()
{
    int i,x,y,z;
    for(i=100;i<1000;i++)
    {
        x=i%10;
        y=i/10%10;
        z=i/100%10;
        
        if(i==(x*x*x+y*y*y+z*z*z))
        printf("%d\n",i);
        
    }
    return 0;
}
*/
