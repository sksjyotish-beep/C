#include<stdio.h>
#include<conio.h>
int main()
{
    int i, a[100],n,count,value;
    printf("enter value:");
    scanf("%d",&value);
    printf("enter the number of elements:");
    scanf("%d",&n);

    printf("Enter elements:",n);

    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array is:");
    for(i=0;i<n;i++)
    {
        printf("%d, ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]+a[i+1]==value)
        {
            printf("\n(%d,%d)\n ",a[i],a[i+1]);
            count++;
        }
    }
    printf("no. of pairs are:%d\n",count);

    return 0;

}
 