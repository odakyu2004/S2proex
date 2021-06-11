#include <stdio.h>

int main(void){
    char a[20];
    printf("繰り返す言葉を入力: ");
    scanf("%s",a);
    printf("\n");
    printf("%sと%sは２つの%s\n%sはみんなの%s",a,a,a,a,a);
    return 0;
}