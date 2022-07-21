#include <stdio.h>

int nedan(int);

int main(void){
    int game,kakaku,i,n;
    for(i=0;;i++){
        printf("ボーリングのゲーム数を入力: ");
        scanf("%d",&game);
        if(game==0){
            break;
        }
        n=nedan(game);
        printf("利用料金は      %d円です\n",n);
    }

    return 0;
}

int nedan(int x){
    int num;
    
    if(x<=3){
        num=200+350*x;
    }
    if(x>=4){
        num=200+315*x;
    }
    return num;
}