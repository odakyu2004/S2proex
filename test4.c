#include <stdio.h>

int main(){
    float dry;
    float wet;
    float num;

    printf("乾球温度計の気温は？ ");
    scanf("%f",&dry);
    printf("湿球温度計の気温は？ ");
    scanf("%f",&wet);
    
    num =(dry+wet)*0.72 + 40.6 ;

     printf("不快指数 = %4.2f",num);

    if(num>=86){
        printf("全員が苦痛です");
    }else if(num>=80){
        printf("全員が不快です");
    }else if(num>=75){
        printf("半数が不快です");
    }else if(num>=70){
        printf("一部が不快です");
    }else if(num<70){
        printf("快適です");
    }

    return 0;
}