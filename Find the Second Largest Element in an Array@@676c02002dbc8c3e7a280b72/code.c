#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n;i++){
        scanf("%d",&a[i]);}
        int temp=a[0] ;
        int max;
    for(int i=0;i<n;i++){
        if(a[i]<temp)
        {
            max=temp;
            temp=a[i];
            
        }
        

    }
    printf("%d",temp);

    return 0;
}