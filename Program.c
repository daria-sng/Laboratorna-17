#include <stdio.h>
#include <stdlib.h>
#define N1 50
#define N2 60

void processing(int *array, int N, int *new_array);

int main(){
    system ("chcp 65001");
    int x[N1] = {
        17, -43, 89, 6, -32,
        11, 78, 4, -91, 25,
        59, 14, 38, 81, -70,
        9, 66, -2, 48, 100,
        -20, 13, 0, -35, 40,
        19, 53, 26, 7, -31,
        64, -84, 22, 60, 73,
        96, 28, 50, 12, -80,
        21, 3, -97, 45, 16,
        -74, 37, 1, 58, -99
    };

    int y[N2] = {
        42, 17, -83, 6, 35, -91,
        12, 77, -53, 28, -96, -23,
        -45, 9, 68, -31, 100, 4,
        39, -59, 13, -79, 22, -86,
        93, 1, -50, 7, 36, 84,
        -20, 63, -11, 27, 88, -2,
        41, 66, 29, -95, 18, 56,
        3, -97, 46, -60, 33, 25,
        -58, 14, -80, 10, 76, 34,
        30, 44, 21, 64, 0, -99
    };

    int new_array1[N1], new_array2[N2];
    int i;
    processing(x, N1, new_array1);
    puts("x[50]: ");
    for(i=0; i<N1; i+=1){
        printf("%d ", new_array1[i]);
    }
    printf("\n");

    processing(y, N2, new_array2);
    puts("y[60]: ");
    for(i=0; i<N2; i+=1){
        printf("%d ", new_array2[i]);
    }

    return 0;
}

void processing(int *array, int N, int *new_array){
    int *p2 = new_array;
    int *p1;
    int *end = array + N;
    for(p1=array; p1<end; p1+=1){
        if(*p1>0){
            *p2 = *p1;
            p2+=1;
        }
    }
    while(p2 < new_array+N){
        *p2 = 0;
        p2+=1;
    }
}