#include <stdio.h>
#include <math.h>

int main(void){
    float θ,m,v0,g,pi,x,h,rad;
    g = 9.8;
    pi =3.14;
    m= 10;
   

    printf("角度θと初速度V0を入力してください: ");
    scanf("%f %f",&θ,&v0);

    rad = ((pi)/180)*θ;

    h = ((v0*v0)*(sin(rad)*sin(rad)))/(2*g);
    x = (2*(v0*v0)*sin(rad)*cos(rad))/g;
    printf("最高点の高さは %8.4f(m)です. 飛距離は %8.4f(m)です.",h,x);    
}
