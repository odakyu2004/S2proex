#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define AVERAGE 14.66

int main(void){
    FILE *idavefile2;
    FILE *in_file;
    char todofukenmei[9];
    char name[10];
    char conma[2];
    char row[50];
    int todofuken;
    float ido,kion,kionsa;
    idavefile2=fopen("idave2.prn","r"); 
    
    printf("input file name ?"); 
    scanf("%s", name);
    if((in_file = fopen(name,"w"))==NULL) {
        printf("Can not open file. \n");
        exit(-1); 
    }

    
    printf(" ** 全国の気温と緯度 ** \n"); 
    printf(" 都道府県名  緯度    気温  気温差 \n"); 

    while( fgets( row , sizeof( row ) , idavefile2 ) != NULL ) {
        sscanf(row,"%d %c %[^,] %c %f %c %f",&todofuken,conma,todofukenmei,conma,&ido,conma,&kion);
        kionsa=kion-AVERAGE;
        printf( "   %s   %2.3f   %2.1f   %+2.2f\n",todofukenmei,ido,kion,kionsa);
        
        fprintf(in_file,"%s %2.3f %2.1f %+2.2f\n",todofukenmei,ido,kion,kionsa);
    }
    fclose(in_file);

    fclose(idavefile2);

    return 0;
}