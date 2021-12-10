#include <stdio.h>

int main(){
  int in;
  int *p;

    printf("16進数で数値を入力してください");
    scanf("%x",&in);
    p=&in;
    printf("%f\n",*(float*)p);
    
    return 0;
}
