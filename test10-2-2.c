#include <stdio.h>

int main(void){
    int in;
    int *p;

    printf("16進数で数値を入力してください");
    scanf("%x",&in);
    p=&in;
    printf("%d",*(unsigned int*)p);
    
    return 0;

}