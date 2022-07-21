#include <stdio.h>
#define N 100
int main(){
    int i,j,num,tanka1,suryo,uriage;

    int bango[N]={0};
    int bango2[N]={0};
    int tanka2[N]={0};
    int bool[N]={0};
    
    for(i=0;i<100;i++){ /*商品の登録処理*/
        printf("商品番号と単価を入力してください ");
        scanf("%d %d",&bango[i],&tanka1);
	    
        num=bango[i];
	    bango2[i]=bango[i];
	
        for(j=0;j<i;j++){/*重複エラー判定処理*/
            if((bango[i])==(bango2[j])){
                printf("その商品番号はすでに存在します！\n");
		        bool[i]=1;
		        break;
            }
        }

	if(!bool[i]){
	    tanka2[num]=tanka1;
	}
	 
    if(num==0){/*終了判定処理*/
        break;
    }
    
    }
    
    printf("ー売上金額の計算をしますー\n");

    for(i=0;;i++){/*売上の登録処理*/
	    printf("商品番号を入力してください ");
	    scanf("%d",&num);
	if(num==0){
	    printf("\n売上金額の合計は%d円です。\n",uriage);
	    break;
	  
	}else if(tanka2[num]==0){
	  printf("商品番号にエラーがあります！\n");
	  continue;/*入力画面にジャンプ*/
	}
        
	    printf("数量を入力してください ");
	    scanf("%d",&suryo);
	    printf("  商品%dの売上金額は%d円です。\n",num,tanka2[num]*suryo);
	    uriage+=tanka2[num]*suryo;
	
    }
    return 0;
}