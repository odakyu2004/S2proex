#include <stdio.h>
#include <stdlib.h>
#define N 47
float TEST(int[],float[]);

int main(void){
    FILE *idavefile;
    char todofukenmei[15];
    char name[10];
    int todofuken,i,todofukenA[47];
    float ido,kion,kionsa,heikin,sum;
    float idoA[47],kionA[47],kionsaA[47];

  printf("ファイル名を入力してください ");
  scanf("%s",name);
    
    if((idavefile=fopen(name,"r"))==NULL){
      printf("Can not open file.\n");
      exit(-1);
    }
    
   while(fscanf(idavefile,"%d %s %f %f",&todofuken,todofukenmei,&ido,&kion)!=EOF) {
     todofukenA[i]=todofuken;
     kionA[i]=kion;
     sum=sum+kionA[i];
     i++;
    }
   
   float a=TEST(todofukenA,kionA);

   printf("%f",a);
  return 0;
}

float TEST(int A[],float B[]){
  int i,j;
  float x;
  for(i=0;i<N-1;i++){
    for(j=i+1;j<N;j++){
      if(B[i]<B[j]){
	x=B[i];
	B[i]=B[j];
	B[j]=x;
      }
    }
  }
  float a,b,c,d,e,f,g;
  for(i=0;i<47;i++){
    a=a+B[i];
  }

  return a;

}
