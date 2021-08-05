#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HARU "春"

struct {
    int tokyo_1400;     // 1    1   3
    
    int kyoto_1200;     // 1                1
    int kyoto_1400;     // 1    1   1       3

    int hakodate_1200;  // 2    1   2   1   1
    int hakodate_1000;  //              1   1

    int fukushima_1200; // 1    2       3

    int hanshin_1200;   // 1                1
    int hanshin_1400;   //          1

    int sapporo_1200;   // 1    1   1   1

    int chukyo_1200;    // 1                1
    int chukyo_1400;    //      1           1

    int nakayama_1200;  // 1        2

    int niigata_1400;   //      2       2
    int niigata_1000;   //              2
    int niigata_1200;   //                  1

    int kokura_1200;    //      1
    
} tankyori;


void addData(void);


int main(void) {

    //tankyori.chukyo_1200 = 5;
    //printf("中京 1200 : %d\n", tankyori.chukyo_1200);

    addData();
    


    // 選択
    // 0 -> 登録
    // 1 -> 短距離
    // 2 -> マイル
    // 3 -> 中距離
    // 4 -> 長距離
    // 5 -> ダート
    // 6 -> 季節
    // 7 -> 天気・馬場




    return 0;
}

void addData(void) {
    char buf;
    char buf2[20];
    char *ptr;

    //char season[] = {"春夏秋冬"}; 

    printf("季節を入力して下さい\n");
    printf("[1]春 [2]夏 [3]秋 [4]冬\n");

    while (1) {
        buf = getchar();
        while (getchar() != '\n');
        if ('1' <= buf && buf <= '4') break;
        printf("[ERROR]もう一度入力して下さい\n");
    }

    //if (buf == '0')


    printf("季節:%c\n", buf);

    printf("データを入力して下さい\n");
    while (1) {
        fgets(buf2, sizeof(buf2), stdin);

        buf2[strlen(buf2)-1] = '\0';

        printf("buf2 = [%s]\n", buf2);

        ptr = strtok(buf2, " ");
        while (ptr != NULL) {
            printf("%s\n", ptr);
            ptr = strtok(NULL, " ");
        }
    }

    

    /*
    sa 
    ha  hk
    fu  fk
    na  nk
    to  tk
    ni  ng
    ch  ch
    ky  ky
    ha  hs
    ko  kk
    oi  oi

    */


    //}

    //1  1200 1 1



    


    // ヒントコマンドが打たれた場合
    /*
    printf("[適性] [競馬場] [距離] [天気] [馬場]\n");
    printf("[適性] [1]短距離 [2]マイル [3]中距離 [4]長距離 [5]ダート\n");
    printf("[競馬場] \n");
    printf("[天気] [1]晴 [2]曇 [3]雨 [4]雪\n");
    printf("[馬場] [1]良 [2]稍重 [3]重 [4]不良\n");
    */


    for (int i=0; i<5; i++) {
        // 競馬場 : 
        // 距離 :
        // 天気 :
        // 馬場 : 

    }
}