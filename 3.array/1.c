#include<stdio.h>
#include<conio.h>
int main()
{
    int i, a[100],n,count;
    
    
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
    count=0;
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i+1]&& a[i]>a[i-1])
            count++;
        
    }
    printf("the no. is:%d",count);
    
    return 0;

}
 