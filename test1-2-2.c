#include <stdio.h>

int main(){
    int i,j,num,ans;

    printf("数値を入力してください ");
    scanf("%d",&num);
        
    if(10<=num){
        for(i=1;i<10;i++){
            for(j=1;j<10;j++){
                ans = i*j;
                printf("%3d",ans);
            }
            printf("\n");
        }
    }else if(num<10){
        for(i=1;i<num+1;i++){
            for(j=1;j<10;j++){
                ans = i*j;
                printf("%3d",ans);
            }
            printf("\n");
        }
    }

    return 0;
}