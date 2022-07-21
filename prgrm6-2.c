#include <stdio.h>
#define N 10

int main(){
  int i,j,d;
  int array[N];
  
  printf("整数値を10個入力してください\n");
  
  for(i=0;i<N;i++){
    printf("%d個目の数値 ",i+1);
    scanf("%d",&array[i]);    
  }

  for(i=0;i<N-1;i++){
    for(j=i+1;j<N;j++){
      if(array[i]<array[j]){
	d=array[i];
	array[i]=array[j];
	array[j]=d;
      }
    }
  }

  printf("降順で並び替えると\n");
  
  for(i=0;i<N;i++){
    printf("%d\n",array[i]);
  }
  printf("となります");
  
  return 0;
}