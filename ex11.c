#include <stdio.h>

int main(void){
FILE *zaikofile;
int bango, tanka, suryo; 
zaikofile=fopen("zaiko.prn", "w");

for( ; ; ) {
printf(" 商品番号を入力: ");
scanf(" %d", &bango); if( bango<=0 )
{ break; }
else
{
printf(" 単価と在庫数量を入力: "); scanf(" %d %d", &tanka, &suryo); 
fprintf(zaikofile, "%2d %4d %3d \n",bango, tanka, suryo); 
}
} 

fclose(zaikofile); 

return 0;
}