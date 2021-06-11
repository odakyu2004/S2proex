#include <stdio.h>
#include <ctype.h>

int main(void){
    float omosa;

    printf("郵便物の重さ(g)を入力 ");
    scanf("%f",&omosa);
    printf("\n");
    
    if(isdigit('omosa')){
        printf("無効な数値です");
    }else if(0<omosa&&omosa<=25){
        printf("郵便料金は82円です");
    }else if(omosa<=50&&omosa>0){
        printf("郵便料金は92円です");
    }else if(omosa>50){
        printf("郵便物が重すぎます");
    }else {
        printf("無効な数値です");
    }

    return 0;
}
