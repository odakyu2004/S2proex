#include <stdio.h>

int main(void){
    FILE *idavefile;
    int todofuken;
    float ido,kion,kionsa,heikin;
    idavefile=fopen("idave.prn","r");
    heikin=0;

    printf(" ** 全国の気温と緯度 ** \n"); 
    printf(" 県番号 緯度 経度 気温差 \n"); 


    while(fscanf(idavefile,"%2d %f %f",&todofuken,&ido,&kion)!=EOF){
        printf(" %2d %2.3f %2.2f \n",todofuken,ido,kion); 
    }

    printf("----------------------------------\n");
    printf("              全国の平均気温 %2.3f",heikin);

    fclose(idavefile);

    return 0;
}
