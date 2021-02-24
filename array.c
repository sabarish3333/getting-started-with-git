#include<stdio.h>
int main()
{
    int i,sum;
    int a[] = {1,2,3};
    sum=0;
    for(i=0;i<3;i++)
    {
    	sum=sum+a[i];
	}
    printf("%d",sum);


    return 0;
}
