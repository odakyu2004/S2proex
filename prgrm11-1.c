#include <stdio.h>

int main(){
    FILE *idavefile;
    char name[10];
    int todofuken;
    float ido,kion;

    printf("input file name ?");
    scanf("%s",name);
    if((idavefile=fopen(name,"w"))==NULL){
        printf("Can not open file\n");
        return 0;
    }
    

    for(;;){
        printf("都道府県番号を入力してください");
        scanf("%2d",&todofuken);
        if(todofuken==0){
            break;
        }else if(todofuken!=0){
            printf("緯度,平均気温を入力してください");
            scanf("%f %f",&ido,&kion);
            fprintf(idavefile,"%2d %2.2f %2.1f\n",todofuken,ido,kion);
        }
    }

    fclose(idavefile);
    return 0;

    /*回帰曲線のaは1度緯度が上がるとどれだけ気温が上がるかを示している */
}