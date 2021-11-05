#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    char omosas[10];
    float omosa;
    int i;

    printf("郵便物の重さ(g)を入力 ");
    scanf("%s",&omosas);
    printf("\n");
    
    for (i=0; i<strlen(omosas); i++) {
       if (!isdigit(omosas[i])) {
       		printf("無効な数値です");
       		return 0; 
       }
    }
    
    omosa=atoi(omosas);
    
    if(omosa<=0){
    	printf("無効な数値です");  
	}else if(omosa>50){
        printf("郵便物が重すぎます");
    }else if(0<omosa&&omosa<=25){
       	printf("郵便料金は82円です");
    }else if(omosa<=50&&omosa>0){
       	printf("郵便料金は92円です");
   	} 
   	　
    return 0;
}
