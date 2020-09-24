#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("input first number.\n");
    scanf("%d",&a);
    printf("input second number.\n");
    scanf("%d",&b);
        if(a>b){
        printf("1st number is greater.\n");
    }
    if(b>a){
        printf("2nd number is greater.\n");
    }
    return 0;
}
