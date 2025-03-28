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
    int c=n-x;
    for (int h=c;h<n;h++){
        printf("%d",a[h]);
        printf("\n");
    }
    for(int j=0;j<c;j++)
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