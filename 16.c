//�ж� 101 �� 200 ֮���������
//��������������ָ����1����Ȼ���У�����1���������ⲻ����������������Ȼ�� 
#include <stdio.h> 
//ѡ��һ��������1��������н���ѭ�������������������ѭ�������е���������������Ͳ��������� 
int main(){
	int i;
	int num;
	printf("������һ������");
	scanf("%d",&num);
	for(i=2;i<num;i++){
		if(num%i==0){
			printf("%d����������\n", num);
			break;
		}else{
			printf("%d��������\n", num);
			break;
		}
	} 
	return 0;
}
//ʱ���æ���о�����ͦ���ģ�
/*�ο���
 #include <stdio.h>
 
int main()
{
    int i,j;
    int count=0;
    
    for (i=101; i<=200; i++) 
    {
        for (j=2; j<i; j++) 
        {
        // ��� j �ܱ� i ����������ѭ��
            if (i%j==0) 
                break;
        }
    // �ж�ѭ���Ƿ���ǰ��������� j<i ˵���� 2~j ֮��,i �п���������
        if (j>=i) 
        {
            count++;
            printf("%d ",i);
        // ���У��� count ������ÿ���������
            if (count % 5 == 0) 
            printf("\n");
        }
    }    
    return 0;
}
*/ 
