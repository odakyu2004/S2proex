#include <stdio.h>

int main(){
    float in;
    float *p;
    
    printf("10進数で数値を入力してください");
    scanf("%f",&in);
    p=&in;
    printf("%x",*(unsigned int*)p);
    
    return 0;
}