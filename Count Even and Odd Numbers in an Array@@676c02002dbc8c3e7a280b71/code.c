#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        int d=0,e=0;
    for(int j=0;j<n;j++){
        if(a[j]%2==0){
            d++;
        }
        else{
            e++;
        }
    }
    printf("%d %d",d,e);



        return 0;
}