#include <stdio.h>
#include <stdlib.h>
#define N 47

void TEST(int[],float[],float*,float*,int*,float*,int*,float*);

int main(void){
    FILE *idavefile;
    char todofukenmei[15];
    int todofuken,i=0,todofukenA[N];
    float ido,kion,kionsa,heikin,sum;
    float idoA[N],kionA[N],kionsaA[N];
    
    idavefile=fopen("idave.prn","r");
    
    while(fscanf(idavefile,"%d %s %f %f",&todofuken,todofukenmei,&ido,&kion)!=EOF) {
        todofukenA[i]=todofuken;
        kionA[i]=kion;
        i++;
    }
    float a,b,d,f;
    int c,e;
    TEST(todofukenA,kionA,&a,&b,&c,&d,&e,&f);
    printf("--全国の気温の合計--\n   %5.3f°C\n",a);
    printf("--全国の平均気温--\n    %5.3f°C\n",b);
    printf("--最高気温の都道府県番号--\n    %d\n",c);
    printf("--最高気温の都道府県気温--\n    %f°C\n",d);
    printf("--最低気温の都道府県番号--\n    %d\n",e);
    printf("--最低気温の都道府県気温--\n    %f°C\n",f);
    return 0;
}

void TEST(int A[],float B[],float *a,float *b,int *c,float *d,int *e,float *f){
    int i,j,y;
    float x;

    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            if(B[i]<B[j]){
	            x=B[i];
                y=A[i];
	            B[i]=B[j];
                A[i]=A[j];
	            B[j]=x;
                A[j]=y;
            }
        }
    }

    for(i=0;i<47;i++){
        *a=*a+B[i];
        *b=*a/47;
        *c=A[0];
        *d=B[0];
        *e=A[46];
        *f=B[46];
    }

}