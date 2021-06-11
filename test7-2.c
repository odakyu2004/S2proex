#include <stdio.h>

int main(){
    int i,j,bango,tanka1,tanka2[1000],suryo,uriage;

    for(i=0;;i++){
        printf("商品番号と単価を入力してください");
        scanf("%d %d",&bango[i],&tanka1);

        for(j=0;j==i;j++){
            if((bango[i])==(bango[j])){
                printf("その商品番号はすでに存在します！");
            }
        }
        
        if(bango==0){
            break;
        }
        tanka1=tanka2[bango];
    }
}