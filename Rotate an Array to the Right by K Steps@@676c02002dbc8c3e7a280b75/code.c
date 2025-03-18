#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int n[a];
    int l=a;
    for(int i=0;i<5;i++){
        scanf("%d",&n[i]);

    }
    int b;
    scanf("%d",&b);
    int z=b;
    while (b!=0)
    {
        print("%d",n[a]);
        a--;
        b--;

    }
    for (int j=0;j<l-z;j++)
    {
        print("%d",n[j]);
    }
}