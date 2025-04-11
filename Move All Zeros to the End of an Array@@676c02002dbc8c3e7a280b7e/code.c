#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }

    int temp;

    for (int i=0;i<n;i++)
{
    if (a[i]==0){
        for(int j=i+1;j<n;j++){
            
                temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            
        }}
        else{
            continue;
        }
    }
    // for(int i=n-1;i>0;i--){
    //     printf("%d ",a[i]);}
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;

}