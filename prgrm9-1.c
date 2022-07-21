#include <stdio.h>
#define N 21

int main(){
  int i,j;
  int A[N][N]={
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0},
        {0,0,0,0,0,0,1,1,1,1,0,1,1,1,1,0,0,0,0,0,0},
        {0,0,0,0,0,0,1,1,1,1,0,1,1,1,1,0,0,0,0,0,0},
        {0,0,0,0,0,0,1,1,1,1,0,0,1,1,1,0,0,0,0,0,0},
        {0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,0,0},
        {0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,0,0},
        {0,0,0,0,0,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0},
        {0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0},
        {0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
        {0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0},
        {0,0,0,0,1,1,1,1,0,0,0,0,0,1,1,1,1,0,0,0,0},
        {0,0,0,0,1,1,1,1,0,0,0,0,0,1,1,1,1,0,0,0,0},
        {0,0,0,1,1,1,1,1,0,0,0,0,0,1,1,1,1,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
    };
    int B[N][N]={
        {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0}, 
        {0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0},
        {0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,1,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,1},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
    };

    char AA[N][N]={{0}};
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
	        if(A[i][j]==1){
	            AA[i][j]='*';
	        }else if(A[i][j]==0){
	            AA[i][j]=' ';
	        }
	        printf("%c",AA[i][j]);
        }
        printf("\n");
    }

    char BB[N][N]={{0}};
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
	        if(B[i][j]==1){
	            BB[i][j]='*';
	        }else if(B[i][j]==0){
	            BB[i][j]=' ';
	        }
	        printf("%c",BB[i][j]);
        }
        printf("\n");
    }

 
    int EXOR[N][N];
    char EXORB[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
	        if((A[i][j]^B[i][j])==1){
	            EXOR[i][j]=1;
	            EXORB[i][j]='*';
	        }else if((A[i][j]^B[i][j])==0){
	            EXOR[i][j]=0;
	            EXORB[i][j]=' ';
	        }
        }
    }

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
	        printf("%c",EXORB[i][j]);
        }
        printf("\n");
    }

    char C[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
	        if((EXOR[i][j]^B[i][j])==1){
	            C[i][j]='*';
	        }else if((EXOR[i][j]^B[i][j])==0){
	            C[i][j]=' ';
	        }
        }
    }

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
	        printf("%c",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}