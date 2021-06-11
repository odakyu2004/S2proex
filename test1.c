#include <stdio.h>

int main(void){
    int h,m,s,sum;
    printf("時間を入力してください: ");
    scanf("%d",&h);
    printf("分を入力してください: ");
    scanf("%d",&m);
    printf("秒を入力してください: ");
    scanf("%d",&s);
    
    sum = 3600*h+60*m+s;

    printf("%d時間%d分%d秒は、%d秒です。",h,m,s,sum);
    return 0;
}