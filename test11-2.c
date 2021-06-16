#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *idavefile2;
    int todofukennum;
    char todofukenname[20];
    float ido,kion;
    idavefile2=fopen("idave2.prn","w");

    for(;;){
        printf("都道府県番号を入力してください");
        scanf("%2d",&todofukennum);
        if(todofukennum==0){
            break;
        }else if(todofukennum!=0){
            printf("都道府県名,緯度,平均気温を入力してください");
            scanf("%s %f %f",todofukenname,&ido,&kion);
            fprintf(idavefile2,"%2d,%s,%2.3f,%2.2f\n",todofukennum,todofukenname,ido,kion);
        }
    }

    fclose(idavefile2);
    return 0;

}
