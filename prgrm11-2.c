#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *idavefile2;
    int todofukennum;
    char todofukenmei[20];
    float ido,kion;
    char name[10];

    printf("ファイル名を入力してください");
    scanf("%s",name);
    if((idavefile2=fopen(name,"w"))==NULL){
        printf("Can not open file\n");
        exit(-1);
    }

    for(;;){
        printf("都道府県番号を入力してください");
        scanf("%2d",&todofukennum);
        if(todofukennum==0){
            break;
        }else if(todofukennum!=0){
            printf("都道府県名,緯度,平均気温を入力してください");
            scanf("%s %f %f",todofukenmei,&ido,&kion);
            fprintf(idavefile2,"%2d %s %2.3f %2.2f\n",todofukennum,todofukenmei,ido,kion);
        }
    }

    fclose(idavefile2);
    return 0;
}
