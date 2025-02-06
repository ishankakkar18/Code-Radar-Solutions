#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    int b ;
    b=(int)a;
    if (b<97){
        printf("Uppercase");

    }  
    else
    {
        printf("Lowercase");
    }
    return 0;
}