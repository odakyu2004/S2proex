#include <stdio.h> 

int main(void){
    FILE *zaikofile;
    int bango, tanka, suryo, kingaku, goukei; 
    zaikofile=fopen("zaiko.prn", "r");
    goukei=0;
    
    printf(" ** 在庫一覧表 ** \n"); 
    printf(" 商品番号 単価 数量 金額 \n");
    
    while( fscanf( zaikofile, "%2d %4d %3d",&bango, &tanka, &suryo) != EOF) {
        kingaku=tanka*suryo;
        printf("   %2d    %4d %3d %6d \n",bango, tanka, suryo, kingaku); 
        goukei += kingaku;
    }

    printf("         合計 %8d \n", goukei);
    
    fclose(zaikofile);
    
    return 0;
}
