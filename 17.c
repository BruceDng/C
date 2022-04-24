//打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
//例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
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
		//d=a^3+b^3+c^3;	C语言中的三次方不是这样表示的，可通过调用<math.h>头文件，使用pow(x,3)来实现
		//d=a*a*a+b*b*b+c*c*c;	yes
		d=pow(a,3)+pow(b,3)+pow(c,3);//ok
		if(d==i){
			printf("%d是一个水仙数！\n", i);
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
