#include <stdio.h>

int main(){
    int todofuken,tcode[47],j,i;
    float kion[47],ido[47],gokei,heikin,sa1,sa2;
    gokei=0.0;
    printf("都道府県の数を入力");
    scanf("%d",&todofuken);
    printf("\n");
    for(j=0;j<todofuken;j++){
        printf("都道府県コードと緯度と気温を入力");
        scanf("%d %f %f",&tcode[j],&ido[j],&kion[j]);
        gokei+=kion[j];
    }
    heikin=gokei/todofuken;
    
    for(j=0;j<todofuken-1;j++){
        for(i=todofuken-1;i>j;i--){
            if(tcode[i-1]<tcode[i]){
                int d=tcode[i-1];
                float a=kion[i-1];
                float b=ido[i-1];
                tcode[i-1]=tcode[i];
                kion[i-1]=kion[i];
                ido[i-1]=ido[i];
                tcode[i]=d;
                kion[i]=a;
                ido[i]=b;
            }
        }
    }


    printf("%d県の気温の平均  %.2f \n",todofuken,heikin);
    printf("最高気温はコード番号%2dの県で%3.2f度です。緯度は%5.3fです。\n",tcode[0],kion[0],ido[0]);
    printf("最低気温はコード番号%2dの県で%3.2f度です。緯度は%5.3fです。\n",tcode[todofuken-1],kion[todofuken-1],ido[todofuken-1]);
    sa1=kion[0]-kion[todofuken-1];
    sa2=ido[0]-ido[todofuken-1];
    printf("気温の差は%3.2f度です。緯度の差は%5.3f度",sa1,sa2);
    
    return 0;

}

