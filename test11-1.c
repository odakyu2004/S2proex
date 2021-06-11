#include <stdio.h>

int main(){
    FILE *idavefile;
    int todofuken;
    float ido,kion;
    idavefile=fopen("idave.csv","w");

    fprintf(idavefile,"都道府県番号,緯度,平均気温\n");

    for(;;){
        printf("都道府県番号を入力してください");
        scanf("%2d",&todofuken);
        if(todofuken==0){
            break;
        }else if(todofuken!=0){
            printf("緯度,平均気温を入力してください");
            scanf("%f %f",&ido,&kion);
            fprintf(idavefile,"%2d,%2.3f,%2.2f\n",todofuken,ido,kion);
        }
    }

    fclose(idavefile);
    return 0;

    /*回帰曲線のaは1度緯度が上がるとどれだけ気温が上がるかを示している */
}