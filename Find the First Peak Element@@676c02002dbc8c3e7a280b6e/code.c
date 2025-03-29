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
    

    for(int j=0;j<n;j++)
    {

        if (a[j]>a[j+1])
        {
            printf("%d",a[j]);
            break;
        }    
        
    }
       return 0;
}