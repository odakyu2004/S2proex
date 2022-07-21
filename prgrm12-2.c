#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE *idavefile;
    char todofukenmei[15];
    char name[10];
    int todofuken,i;
    float ido,kion,kionsa,heikin,sum;
    float idoA[47],kionA[47];
    
    printf("ファイル名を入力してください ");
    scanf("%s",name);
    
    if((idavefile=fopen(name,"r"))==NULL){
      printf("Can not open file.\n");
      exit(-1);
    }
   
    printf(" ** 全国の気温と緯度 ** \n"); 
    printf(" 都道府県名  緯度    気温  気温差 \n"); 

    while(fscanf(idavefile,"%d %s %f %f",&todofuken,todofukenmei,&ido,&kion)!=EOF) {
	idoA[i]=ido;
	kionA[i]=kion;
	sum=sum+kionA[i];
	i++;
    }
    heikin=sum/47;//平均気温を求める
    i=0;
    rewind(idavefile);
    while(fscanf(idavefile,"%d %s %f %f",&todofuken,todofukenmei,&ido,&kion)!=EOF){
      kionsa=(kionA[i])-heikin;
      printf("   %s   %2.3f   %2.1f   %+3.2f \n",todofukenmei,idoA[i],kionA[i],kionsa);
      i++;
    }
 
    printf("-------------------------------\n");
    printf("         全国の平均気温 %5.3f\n",heikin);
 

    fclose(idavefile);

    return 0;
}