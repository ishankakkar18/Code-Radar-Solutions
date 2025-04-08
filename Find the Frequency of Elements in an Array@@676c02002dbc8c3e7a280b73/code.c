#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        for(int j=0;j<n-1;j++)
        {int m=1;
        
            for(int k=j+1;k<n;k++){
                int g=0;
                for(int l=k-2;l>0;l--){
                    if (a[l]!=a[k]){g++;}
                
                if(g==j-1){
                if (a[j]==a[k] )
                {
                    m++;
                }
            }}}
            printf("%d %d",a[j],m);
            printf("\n");
        }

        return 0;
}