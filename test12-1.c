#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *idavefile;
    int todofuken;
    float ido,kion,kionsa,heikin;
    idavefile=fopen("idave2.csv","r");
    heikin=0;
    fscanf(idavefile,"%2d,%f,%f",&todofuken,&ido,&kion);

    fprintf(idavefile,"県番号,緯度,平均気温\n");

    while(fscanf(idavefile,"%2d %4f %4f",&todofuken,&ido,&kion)!=EOF){
        kionsa=heikin-kion;
    }

    

    return 0;
}
