#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    int i;
    float outomosa;
    char inomosa[10];
   
    printf("郵便物の重さ(g)を入力 ");
    scanf("%s",inomosa);
    printf("\n");
    
    for(i=0; i<strlen(inomosa); i++){
        if (!isdigit(inomosa[i])) {
       		printf("無効な数値です");
       		
               return 0; 
       }
    }
    
    outomosa=atoi(inomosa);
    
    if(outomosa<=0){
    	printf("無効な数値です");  
	}else if(outomosa>50){
        printf("郵便物が重すぎます");
    }else if(outomosa<=25){
       	printf("郵便料金は82円です");
    }else{
       	printf("郵便料金は92円です");
   	} 

    return 0;
}