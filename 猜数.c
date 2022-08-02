#include <stdio.h>

int main()
{
	srand(time(0));
	int number= rand()%1000+1;
	int count=0;
	int a=0;
	printf("我已经想好了一个1-1000的数");
	do{
		printf("请猜这个数");
		scanf("%d", &a);
		count ++;
		if (a>number){
			printf("你猜的数大了");
		} else if(a<number){
			printf("你猜的数小了");
		}
	}
		while (a!=number);
		printf("恭喜你，用%d次就猜到了答案\n", count);
	
	return 0;
}
