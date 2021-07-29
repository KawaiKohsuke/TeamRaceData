#include <stdio.h>

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

int main(void) {
    return 0;
} 