#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[50];
    int m=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=a[0];
    for (int j=0;j<n;j++)
    {
        if (a[j]>=c)
        {m++;
            
        }
    }
    if (m==n)
    {
        printf("Sorted");

    }
    else{
        printf("Not Sorted");
    }



    return 0;
}