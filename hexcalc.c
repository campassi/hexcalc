#include<stdio.h>

int set(int c);

int main()
{
	set(5555); // max stake
	set(3650); // 10 yr stake
	set(730);  //  2 yr stake
	set(1095);
return 0;
}

int set(int c)
{
	for(; c >= 90; c /= 2)
	{
		printf("%d\n", c);
	}
	printf("------\n");
	return 0;
}
