#include <stdio.h>

int main(){
	float num1,num2;
    char kigo[1];
    float ans;
    int i;

    printf("--これは電卓のプログラムです---\n");
    printf("10キーから入力してください。\n");
    printf("Enterキーは=を示します。\n");
    printf("0+0を入力すると終了します。\n");

    for(;;){
    scanf("%f %c %f",&num1,&kigo[0],&num2);
        
        if(num1==0){
            if(kigo[0]=='+'){
                if(num2==0){
                    printf("終了です。\n");
                    break;
                }
            }
        }
        
        if(kigo[0]=='+'){
            ans=num1+num2;
            printf("= %5.2f\n",ans);
        }else if(kigo[0]=='-'){
            ans=num1-num2;
            printf("= %5.2f\n",ans);
        }else if(kigo[0]=='*'){
            ans=num1*num2;
            printf("= %5.2f\n",ans);
        }else if(kigo[0]=='/'){
            ans=num1/num2;
        if(num2==0){
            printf("= エラーです\n");
        }else{
            printf("= %5.2f\n",ans);
            }
        }

    }
    return 0;
}