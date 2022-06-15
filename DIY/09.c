//输入某年某月某日，判断这一天是这一年的第几天？
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);//假设c的输入正确
	if(a % 400 == 0)//Error
	{
		switch( b )
		{
			case 1 :	//31
				printf("今天是这一年的第%d天！", c);
				break;
			case 2 :	//29
				printf("今天是这一年的第%d天！", 31+c);
				break;
			case 3 :	//31
				printf("今天是这一年的第%d天！", 31+29+c);
				break;
			case 4 :	//30
				printf("今天是这一年的第%d天！", 31+29+31+c);
				break;
			case 5 :	//31
				printf("今天是这一年的第%d天！", 31+29+31+30+c);
				break;
			case 6 :	//30
				printf("今天是这一年的第%d天！", 31+29+31+30+31+c);
				break;
			case 7 :	//31
				printf("今天是这一年的第%d天！", 31+29+31+30+31+30+c);
				break;
			case 8 :	//31
				printf("今天是这一年的第%d天！", 31+29+31+30+31+30+31+c);
				break;
			case 9 :	//30
				printf("今天是这一年的第%d天！", 31+29+31+30+31+30+31+31+c);
				break;
			case 10 :	//31
				printf("今天是这一年的第%d天！", 31+29+31+30+31+30+31+31+30+c);
				break;
			case 11 :	//30 
				printf("今天是这一年的第%d天！", 31+29+31+30+31+30+31+31+30+31+c);
				break;
			case 12 :	//31
				printf("今天是这一年的第%d天！", 31+29+31+30+31+30+31+31+30+31+30+c);
				break;
			default:
				printf("输入的月份有误！");
		}
	}else{
		switch( b )
		{
			case 1 :	//31
				printf("今天是这一年的第%d天！", c);
				break;
			case 2 :	//28
				printf("今天是这一年的第%d天！", 31+c);
				break;
			case 3 :	//31
				printf("今天是这一年的第%d天！", 31+28+c);
				break;
			case 4 :	//30
				printf("今天是这一年的第%d天！", 31+28+31+c);
				break;
			case 5 :	//31
				printf("今天是这一年的第%d天！", 31+28+31+30+c);
				break;
			case 6 :	//30
				printf("今天是这一年的第%d天！", 31+28+31+30+31+c);
				break;
			case 7 :	//31
				printf("今天是这一年的第%d天！", 31+28+31+30+31+30+c);
				break;
			case 8 :	//31
				printf("今天是这一年的第%d天！", 31+28+31+30+31+30+31+c);
				break;
			case 9 :	//30
				printf("今天是这一年的第%d天！", 31+28+31+30+31+30+31+31+c);
				break;
			case 10 :	//31
				printf("今天是这一年的第%d天！", 31+28+31+30+31+30+31+31+30+c);
				break;
			case 11 :	//30 
				printf("今天是这一年的第%d天！", 31+28+31+30+31+30+31+31+30+31+c);
				break;
			case 12 :	//31
				printf("今天是这一年的第%d天！", 31+28+31+30+31+30+31+31+30+31+30+c);
				break;
			default:
				printf("输入的月份有误！");
		}
	}
	return 0;
}



/*	参考答案

#include <stdio.h>
int main()
{
    int day,month,year,sum,leap;
    printf("\n请输入年、月、日，格式为：年,月,日（2015,12,10）\n");
    scanf("%d,%d,%d",&year,&month,&day);  // 格式为：2015,12,10
    switch(month) // 先计算某月以前月份的总天数
    {
        case 1:sum=0;break;
        case 2:sum=31;break;
        case 3:sum=59;break;
        case 4:sum=90;break;
        case 5:sum=120;break;
        case 6:sum=151;break;
        case 7:sum=181;break;
        case 8:sum=212;break;
        case 9:sum=243;break;
        case 10:sum=273;break;
        case 11:sum=304;break;
        case 12:sum=334;break;
        default:printf("data error");break;
    }
    sum=sum+day; // 再加上某天的天数
    if(year%400==0||(year%4==0&&year%100!=0)) {// 判断是不是闰年
        leap=1;
    } else {
       leap=0;
    }
    if(leap==1&&month>2) { // *如果是闰年且月份大于2,总天数应该加一天
        sum++;
    }
    printf("这是这一年的第 %d 天。",sum);
    printf("\n");
}

*/ 
