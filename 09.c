//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);//����c��������ȷ
	if(a % 400 == 0)//Error
	{
		switch( b )
		{
			case 1 :	//31
				printf("��������һ��ĵ�%d�죡", c);
				break;
			case 2 :	//29
				printf("��������һ��ĵ�%d�죡", 31+c);
				break;
			case 3 :	//31
				printf("��������һ��ĵ�%d�죡", 31+29+c);
				break;
			case 4 :	//30
				printf("��������һ��ĵ�%d�죡", 31+29+31+c);
				break;
			case 5 :	//31
				printf("��������һ��ĵ�%d�죡", 31+29+31+30+c);
				break;
			case 6 :	//30
				printf("��������һ��ĵ�%d�죡", 31+29+31+30+31+c);
				break;
			case 7 :	//31
				printf("��������һ��ĵ�%d�죡", 31+29+31+30+31+30+c);
				break;
			case 8 :	//31
				printf("��������һ��ĵ�%d�죡", 31+29+31+30+31+30+31+c);
				break;
			case 9 :	//30
				printf("��������һ��ĵ�%d�죡", 31+29+31+30+31+30+31+31+c);
				break;
			case 10 :	//31
				printf("��������һ��ĵ�%d�죡", 31+29+31+30+31+30+31+31+30+c);
				break;
			case 11 :	//30 
				printf("��������һ��ĵ�%d�죡", 31+29+31+30+31+30+31+31+30+31+c);
				break;
			case 12 :	//31
				printf("��������һ��ĵ�%d�죡", 31+29+31+30+31+30+31+31+30+31+30+c);
				break;
			default:
				printf("������·�����");
		}
	}else{
		switch( b )
		{
			case 1 :	//31
				printf("��������һ��ĵ�%d�죡", c);
				break;
			case 2 :	//28
				printf("��������һ��ĵ�%d�죡", 31+c);
				break;
			case 3 :	//31
				printf("��������һ��ĵ�%d�죡", 31+28+c);
				break;
			case 4 :	//30
				printf("��������һ��ĵ�%d�죡", 31+28+31+c);
				break;
			case 5 :	//31
				printf("��������һ��ĵ�%d�죡", 31+28+31+30+c);
				break;
			case 6 :	//30
				printf("��������һ��ĵ�%d�죡", 31+28+31+30+31+c);
				break;
			case 7 :	//31
				printf("��������һ��ĵ�%d�죡", 31+28+31+30+31+30+c);
				break;
			case 8 :	//31
				printf("��������һ��ĵ�%d�죡", 31+28+31+30+31+30+31+c);
				break;
			case 9 :	//30
				printf("��������һ��ĵ�%d�죡", 31+28+31+30+31+30+31+31+c);
				break;
			case 10 :	//31
				printf("��������һ��ĵ�%d�죡", 31+28+31+30+31+30+31+31+30+c);
				break;
			case 11 :	//30 
				printf("��������һ��ĵ�%d�죡", 31+28+31+30+31+30+31+31+30+31+c);
				break;
			case 12 :	//31
				printf("��������һ��ĵ�%d�죡", 31+28+31+30+31+30+31+31+30+31+30+c);
				break;
			default:
				printf("������·�����");
		}
	}
	return 0;
}



/*	�ο���

#include <stdio.h>
int main()
{
    int day,month,year,sum,leap;
    printf("\n�������ꡢ�¡��գ���ʽΪ����,��,�գ�2015,12,10��\n");
    scanf("%d,%d,%d",&year,&month,&day);  // ��ʽΪ��2015,12,10
    switch(month) // �ȼ���ĳ����ǰ�·ݵ�������
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
    sum=sum+day; // �ټ���ĳ�������
    if(year%400==0||(year%4==0&&year%100!=0)) {// �ж��ǲ�������
        leap=1;
    } else {
       leap=0;
    }
    if(leap==1&&month>2) { // *������������·ݴ���2,������Ӧ�ü�һ��
        sum++;
    }
    printf("������һ��ĵ� %d �졣",sum);
    printf("\n");
}

*/ 
