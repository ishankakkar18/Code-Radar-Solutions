#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        for(int j=0;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                
                int m=0;
                if (a[j]==a[k])
                {
                    m++;
                }
            }
            printf("%d %d",a[j,m]);
            printf("\n");
        }

        return 0;
}