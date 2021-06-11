#include <stdio.h>

int main(){
    int i,j;
    const int n=10;  
	int num[n];
    printf("整数値を10個入力してください。\n");
    for(i=0;i<=9;i++){
        printf("%dつ目の数値 ",i+1);
        scanf("%d",&num[i]);
    }
    
    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--){
            if(num[j-1]<num[j]){
                int d=num[j-1];
                num[j-1]=num[j];
                num[j]=d;
            }
        }
    }

    printf("大きい値順に並び替えると\n");

    for(i=0;i<n;i++){
    printf("%d\n",num[i]);
    }
    printf("となります。");

    return 0;
}
