#include <stdio.h>

int main(){
    int kaisu,i,num;
    printf("表示する回数を入力");
    scanf("%d",&kaisu);
    for(i=1;i<=kaisu;i++){
        printf("数値を入力してください");
        scanf("%d",&num);
        if(num==0){
            printf("入力した数値は0です。\n");
        }else if(num>0){
            printf("%dは、正の数です\n",num);
        }else if(num<0){
            printf("%dは、負の数です。\n",num);
        }
    }
    return 0;
}

/* Q. int 型で変数を宣言したときに、2147483648, -2147483649 
を入力すると正しく表示されません。この 理由を説明しなさい。

A. int型の有効範囲は4byte=32bitつまり2の32乗の範囲しか表すことができないので
2147483648, -2147483649を入力しても範囲外であるため正しく表示することができない。
*/