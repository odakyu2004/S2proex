#include <stdio.h>

int main(void){
    int i,j,n;
    int *p;
    int B[3][3][3]={{
                        {0,1,2},
                        {3,4,5},
                        {6,7,8},
                    },
                    {
                        {9,10,11},
                        {12,13,14},
                        {15,16,17},
                    },
                    {
                        {18,19,20},
                        {21,22,23},
                        {24,25,26},
                    }};

    for(i=0;;i++){
        if(i==3){
            break;
        }
        for(n=0;;n++){
            if(n==3){
                break;
            }
            for(j=0;;j++){
                if(j==3){
                    break;
                }
                p=&B[i][n][j];
                printf("%d,%d,%d",i,n,j);
                printf(" %p",p);
                printf(" %d\n",B[i][n][j]);
            }
        }
    }

}