#include <stdio.h>

int main(void){
    FILE *idavefile;
    int todofuken;
    float ido,kion,kionsa,heikin;
    idavefile=fopen("idave.prn","r");
    heikin=14.66;

    printf(" ** 全国の気温と緯度 ** \n"); 
    printf(" 県番号  緯度  気温  気温差 \n"); 


    while(fscanf(idavefile,"%2d %f %f",&todofuken,&ido,&kion)!=EOF){
        kionsa=heikin-kion;
        printf("  %2d    %2.2f %-2.1f  %-+2.2f \n",todofuken,ido,kion,kionsa); 
    }

    printf("-------------------------------\n");
    printf("            全国の平均気温 %5.3f",heikin);

    fclose(idavefile);

    return 0;
}
