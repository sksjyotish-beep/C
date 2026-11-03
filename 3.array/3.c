#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a[100],n,count;
    
    
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
        count=1;
        if(a[i]==-1)
            continue;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
        {
                count++;
                a[j]=-1;
        }
        }
       printf("\n%d occurs %d time\n",a[i],count)  ;
    }
   
return 0;
}