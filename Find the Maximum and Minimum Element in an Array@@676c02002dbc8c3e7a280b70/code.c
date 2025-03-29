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
int c=a[0];
int b=a[0];
    for (int j=0;j<n;j++)
    {
        if (c>a[j])
        {c=a[j];}
        else if (b<a[j])
        {b=a[j];}
        else{
            continue;
        }}
        printf("%d %d",c,b);
        
    
    return 0;}