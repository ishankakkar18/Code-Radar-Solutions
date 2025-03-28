// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int c=n-1-x;
    printf("%d",a[c]);
    printf("\n");
    for(int j=0;j<n;j++)
    {
        if(j==c){
            continue;
        }
        else{
            printf("%d",a[j]);
        }
        printf("\n");
    }
    return 0;


}