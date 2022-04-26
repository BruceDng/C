//利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。

#include<stdio.h>
int main()
{
    int score;
    char grade;
    printf("请输入分数:");
    scanf("%d",&score);
    grade=(score>=90)?'A':((score>=60)?'B':'C');
    printf("%c\n",grade);
    return 0;
}
//'A','B' 	双引号里是字符串(\0终止的一维数组），单引号里代表字符(char)
//条件运算符：表达式1？表达式2：表达式3
//若1为真，则将2的值作为整个表达式的取值;否则将3的值作为整个表达式的取值 
