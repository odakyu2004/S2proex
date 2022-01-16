#include <stdio.h>

int main(){
    float jyoutei,katei,takasa,menseki;
    printf("台形の上底、下底、高さを入力");
    scanf("%f %f %f",&jyoutei,&katei,&takasa);
    menseki = (jyoutei+katei)*takasa/2;
    printf("上底=%5.2f 下底=%5.2f 高さ=%5.2f",jyoutei,katei,takasa);
    printf("面積=%5.2f",menseki);

    return 0;
}
