#include <stdio.h>

int main(void){
    int i,n,j;
    int *p;

    int A[4][4]={{0,1,2,3},
                 {4,5,6,7},
                 {8,9,10,11},
                 {12,13,14,15}};

    for(n=0;;i++){
        if(i==4){
            break;
        }
        for(n=0;;n++){
            if(n==4){
                break;
            }
            p=&A[i][n];
            printf("%d,%d",i,n);
            printf(" %p",p);
            printf(" %d\n",A[i][n]);
        }
    }
}