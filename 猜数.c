#include <stdio.h>

int main()
{
	srand(time(0));
	int number= rand()%1000+1;
	int count=0;
	int a=0;
	printf("���Ѿ������һ��1-1000����");
	do{
		printf("��������");
		scanf("%d", &a);
		count ++;
		if (a>number){
			printf("��µ�������");
		} else if(a<number){
			printf("��µ���С��");
		}
	}
		while (a!=number);
		printf("��ϲ�㣬��%d�ξͲµ��˴�\n", count);
	
	return 0;
}
