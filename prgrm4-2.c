#include <stdio.h>

int main(){
    int num;

    printf("ASCIIコード(数値)を入力してください: ");
    scanf("%d",&num);
    if(num>127){
        printf("不正な値です\n");
    }else if(num<=31||num==127){
        printf("%dは制御文字です\n",num);
    }else{
        printf("対応する英文字は%cです\n",num);
    }

    return 0;
}

