#include<stdio.h>
int main()
{
    int n;
    int a[50];

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    

    for(int j=0;j<n-1;j++)
    {
        for(int k=1;k<n;k++)

        if (a[j]>a[k])
        {
            printf("%d",a[j]);
            break;
        }    
        
    }
       return 0;
}