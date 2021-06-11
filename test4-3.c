#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    float omosa;
    int i;
    char str[127];

    printf("郵便物の重さ(g)を入力"); 
    scanf("%s", &str);
    printf("\n");

    for(i=0,i<20;i++){
            if( isdigit(str[i]) != 1)printf("無効な数値です");
    }
    if(0<omosa && omosa<=25){
        printf("郵便料金は 82 円です");
    }else if(omosa<=50){
        printf("郵便料金は 92 円です");
    }

    return 0;
}