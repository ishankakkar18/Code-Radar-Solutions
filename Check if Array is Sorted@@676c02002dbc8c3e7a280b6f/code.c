#inclue<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[50];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=a[0];
    for (int j=0;j<n;j++)
    {
        if (a[j]>c)
        {
            printf("Sorted");
        }
    }



    return 0;
}