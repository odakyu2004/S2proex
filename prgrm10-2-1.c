#include <stdio.h>

int main(){
    float in;
    double in2;
    float *p;
    double *q;
    
    printf("10進数で数値を入力してください");
    scanf("%f",&in);
    p=&in;
    in2=(double)in;
    q=&in2;
    printf("%x\n",*(unsigned int*)p);
    printf("%lx\n",*(unsigned long int*)q);
    
    return 0;
}