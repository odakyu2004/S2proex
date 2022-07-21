#include <stdio.h>

int main(){
    double n,sum,ave;
    int kazu;    
    kazu = 0;

    for(;;){
        printf("正の値を入力してください ");
        scanf("%lf",&n);
        if(n<0){
            break;
        }else if(0<=n){
            kazu++;
            sum+=n;
        }
    }
    ave=sum/kazu;
    printf("入力した数値の数 %3d\n",kazu);
    printf("入力した数値の合計 %5.3f\n",sum);
    printf("入力した数値の平均 %5.3f\n",ave);

    return 0;
}