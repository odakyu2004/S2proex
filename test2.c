#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#define MAS 50
#define N 40

#define rand1() ((double)rand()/(RAND_MAX))

void title(void){   //タイトルを表示する関数
    printf("-----------------------------------------------------------------------------------------");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("     ##   ##   #####     ####   #######           ##   ##   #####     ####   ####### \n");
    printf("     ##   ##  ##   ##   ##  ##   ##   #           ##   ##  ##   ##   ##  ##   ##   # \n");
    printf("     ##   ##  ##   ##  ##        ## #             ##   ##  ##   ##  ##        ## # \n");
    printf("     #######  ##   ##  ##        ####             #######  ##   ##  ##        #### \n");
    printf("     ##   ##  ##   ##  ##  ###   ## #             ##   ##  ##   ##  ##  ###   ## # \n");
    printf("     ##   ##  ##   ##   ##  ##   ##   #           ##   ##  ##   ##   ##  ##   ##   # \n");
    printf("     ##   ##   #####     #####  #######           ##   ##   #####     #####  ####### \n");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("-----------------------------------------------------------------------------------------\n");
}

int menu(void){//メニュー画面とはじめからつづきからを選択する関数
    int in;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("     ▷はじめから                ・・・・・・Pless 0\n\n\n\n");
    printf("     ▷つづきから                ・・・・・・Pless 1\n");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("-----------------------------------------------------------------------------------------\n ▷ ");
    scanf("%d",&in);
    if(in==0){
        printf("  はじめから\n");
    }else if(in==1){
        printf("  つづきから\n");
    }
    printf("-----------------------------------------------------------------------------------------\n");
    
    return in;
}

void graphic(char p1n[],char p2n[],char p3n[],char p4n[],int p1m,int p2m,int p3m,int p4m,int p1g,int p2g,int p3g,int p4g){//ゲーム画面を表示する関数
    char comment[256]={"1Pは学生課で1000円を受け取った!!"};
    printf("1P %10sさん %6d円 あと%3dマス|\n",p1n,p1m,p1g);
    printf("2P %10sさん %6d円 あと%3dマス|\n",p2n,p2m,p2g);
    printf("3P %10sさん %6d円 あと%3dマス|\n",p3n,p3m,p3g);
    printf("4P %10sさん %6d円 あと%3dマス|\n",p4n,p4m,p4g);
    printf("-------------------------------------\n");
    printf("\n");
    printf("\n");
    printf("                       □ □ □ □ □ □         □ □ □ □ □ □\n");
    printf("                       □         □         □         □\n");
    printf("                       □         □         □         □\n");
    printf("                       □         □         □         □\n");
    printf("                       □         □         □         □\n");
    printf("         Start □ □ □ □ □ ■ ■ ■ ■ □         □         □ □ □ □ □ □         □ □ □ □ □ □ Goal\n");
    printf("                                 □         □                   □         □\n");
    printf("                                 □         □                   □         □\n");
    printf("                                 □         □                   □         □\n");
    printf("                                 □         □                   □         □\n");
    printf("                                 □ □ □ □ □ □                   □ □ □ □ □ □\n");
    printf("\n\n\n\n\n");
    printf("-----------------------------------------------------------------------------------------\n");
    printf("  ▷ %s    \n",comment);
    printf("-----------------------------------------------------------------------------------------\n");
}

int status(){
    int p1,p2,p3,p4;
    int mas1,mas2,mas3,mas4;
    char name1[]="佐藤";
    char name2[]="石田";
    char name3[]="山田";
    char name4[]="斉藤"; 
    p1=1000;
    p2=50000;
    p3=0;
    p4=10000;
    mas1=14;
    mas2=20;
    mas3=5;
    mas4=32;
    

    graphic(name1,name2,name3,name4,p1,p2,p3,p4,mas1,mas2,mas3,mas4);

    return 0;
}

void player1(int mas,int money,int *masp,int *moneyp){  //各プレーヤーの情報を共通変数に代入
    *masp=mas;
    *moneyp=money;
}
void player2(int mas,int money,int *masp,int *moneyp){
    *masp=mas;
    *moneyp=money;
}
void player3(int mas,int money,int *masp,int *moneyp){
    *masp=mas;
    *moneyp=money;
}
void player4(int mas,int money,int *masp,int *moneyp){
    *masp=mas;
    *moneyp=money;
}

int randam(void){   //ランダム変数を出力する関数
    time_t ctm;
    unsigned seed=time(&ctm);
    srand(seed);
    int i;
    float r;
    for(i=0;i<10;i++)
    {
        r=rand1();
        printf("%f\n",r);
    }
    return r;
}

int Tmurakami(int mas){ //村上教員室イベント関数
    int rmas;  
    printf("村上先生の教員室だ!\n");
    rmas=mas-3;
    printf("ゴールまであと%dマス\n",rmas); 
    return 0;
}

int gakuseika(int money){   //学生課イベント関数
    int kane;
    printf("学生課だ!\n");
    printf("学生課からお金をもらった\n");

    kane=money+2000;
    printf("%d",kane);
    return 0;
}

int jihanki(int money){ //自販機イベント関数
    int dollar;
    printf("自販機だ!クラス全員分の水を買った。\n");
    money=dollar-4100;
    printf("%d",money);
    return 0; 
}

int s2kyousitu(int mas){    //S2教室イベント関数
    printf("忘れものに気付いたS2教室に戻らないと\n");
    mas=50; 
    return 0;
}

int monster(int mas){   //エナドリイベント関数
    int bmas;
    printf("エナジードリンクを摂取した。力がみなぎってきた。\n");
    bmas=mas+4;
    return 0;
}

int Tmiyasita(int mas){ //宮下研究室イベント関数
    int mmas;
    printf("宮下先生の教員室に来た。不思議と力がみなぎってきた。\n");
    mmas=mas+3;
    return 0;
}

int Mkoujou(int money){ //M科工場イベント関数
    int kane;
    printf("M科の工場に来た。\n");
    printf("落ちていたノギスを売り払った。\n");
    kane=money+3800;
    printf("%d",kane);
    return 0;
}

int tosyokan(int money){    //図書館イベント関数
    int kane;
    printf("図書館を訪れた\n");
    printf("落ちている本を売り払った。\n");
    kane=money+2400;
    printf("%d",kane);
    return 0;
}

int ryoujimu(int money){    //寮事務イベント関数
    int kane;
    printf("寮事務に来た。\n");
    printf("誰かの荷物を受け取って売り払った。\n");
    kane=money+36000;
    printf("%d\n",kane);
    return 0;
}

int ryousyokudou(int mas){  //寮食堂イベント関数
    int mmas;
    printf("寮食堂にて昼食を食べた。\n");
    printf("みるみる元気が無くなってきた。\n");
    mmas=mas-4;
    return 0;   
}

int ryuunen(int mas){   //留年イベント関数
    int mmas;
    printf("プログラミング演習の単位を落とした。\n");
    printf("立ち直るには時間がかかりそうだ。\n");
    mmas=mas-6;
    return 0;     
}
//int bukatu(int mas,int money);
//int randam(float r);
//じゃんけん

int dengen(int mas){   //電源つまずくイベント関数
  int mmas;
    printf("直流安定化電源につまずいた\n");
    mmas=mas-2;
    return 0;   
}

void game(int mas,int money){
    char hoge[1];
    if(mas==44){
        printf("横に行きますか？");
        printf("y/N\n");
        scanf("%s",&hoge[0]);
        if(hoge[0]=='y'){
            printf("飛び級コース\n");
        }
    }
    if(mas==32){//こっちは４２スタートにしたい
        Tmurakami(mas);
    }
    if(mas==28){
        //bukatu(mas);
    }
    if(mas==24){
        dengen(mas);
    }
    if(mas==20){
        jihanki(money);
    }
    if(mas==16){
        ryoujimu(money);
    }
    if(mas==12){
        //kekkon(money);
    }
    if(mas==8){
        ryousyokudou(mas);
    }
    if(mas==4){
        ryuunen(mas);
    }

    if(hoge[0]=='N'){
        printf("普通コース\n");
        if(mas==38){
            gakuseika(money);
        }
        if(mas==36){
            s2kyousitu(mas); 
        }
        if(mas==32){
            Mkoujou(money);
        }
        if(mas==28){
            Tmiyasita(mas); 
        }
        if(mas==24){
            tosyokan(money);
        }
        if(mas==20){
            monster(mas);
        }
        if(mas==16){
            ryoujimu(money);
        }
        if(mas==12){
            //int kekkon(int money);
        }
        if(mas==8){
            ryousyokudou(mas);
        }
        if(mas==4){
            ryuunen(mas);
        }
             
     }
}

int sugoroku(){
    int inmas;
    scanf("%d",&inmas);

    return inmas;
}

int main(){
    int p1,p1s,p1d;//p1はプレイヤーのいるマス,p1sはサイコロの目,p1dはお金をそれぞれ表してる
    int p2,p2s,p2d;
    int p3,p3s,p3d;
    int p4,p4s,p4d;
    int mas,money;
    int n;
    int tarn;
    float r;

    int second =1;
    int out;
    title();
    sleep(second);
    menu();
    status();
    p1=MAS; //マス数初期化
    p2=MAS;
    p3=MAS;
    p4=MAS;
   

    money=1000;
    for(;;){
        n=0;
        tarn=1;
        int m=4*n;
        if(tarn==1+m){
            p1=sugoroku();
            player1(p1,p1d,&mas,&money);
            game(mas,money);
        }else if(tarn==2+m){
            p2=sugoroku();
            player2(p2,p2d,&mas,&money);
            game(mas,money);
        }else if(tarn==3+m){
            p3=sugoroku();
            player3(p3,p3d,&mas,&money);
            game(mas,money);
        }else if(tarn==4+m){
            p4=sugoroku();
            player4(p4,p4d,&mas,&money);
            game(mas,money);
        }
        if(mas==0){
            break;
        }
        printf("%d %d\n",mas,money);
        printf("%d %d\n",m,tarn);
        tarn++;
        if(tarn%4==0){
            n++;
        }
    }
        
    return 0;
}