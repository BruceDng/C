#include <stdio.h>
int main()
{
	const int AMOUNT = 100; //定义const常量，具有不可变性
	int price = 0;
	printf("请输入金额（元）：");
	scanf("%d", &price) ;
	int change = AMOUNT - price;
	printf("找您%d元。\n", change);
	return 0;
}
	

