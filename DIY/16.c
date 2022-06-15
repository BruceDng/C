//判断 101 到 200 之间的素数。
//素数（质数）：指大于1的自然数中，除了1和它本身外不再有其它因数的自然数 
#include <stdio.h> 
//选定一个数，在1到这个数中进行循环遍历，如果该数能与循环遍历中的数整除，则该数就不是素数。 
int main(){
	int i;
	int num;
	printf("请输入一个数：");
	scanf("%d",&num);
	for(i=2;i<num;i++){
		if(num%i==0){
			printf("%d不是素数！\n", num);
			break;
		}else{
			printf("%d是素数！\n", num);
			break;
		}
	} 
	return 0;
}
//时间匆忙，感觉代码挺糟糕的！
/*参考答案
 #include <stdio.h>
 
int main()
{
    int i,j;
    int count=0;
    
    for (i=101; i<=200; i++) 
    {
        for (j=2; j<i; j++) 
        {
        // 如果 j 能被 i 整除再跳出循环
            if (i%j==0) 
                break;
        }
    // 判断循环是否提前跳出，如果 j<i 说明在 2~j 之间,i 有可整除的数
        if (j>=i) 
        {
            count++;
            printf("%d ",i);
        // 换行，用 count 计数，每五个数换行
            if (count % 5 == 0) 
            printf("\n");
        }
    }    
    return 0;
}
*/ 
