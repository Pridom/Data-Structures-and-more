//
// Created by pc on 2019-12-30.
//

#include <stdio.h>

#define ROW 10
#define COL 10

/* or int arr[][COL] */
/* initializes the array */
void initArr(int (*arr)[COL]) {
    int i, j;

    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            arr[i][j] = i * 10 + j;
        }
    }
}

/* prints all the elements in the array */
void printArr(int (*arr)[COL]) {
    int i, j;

    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main3() {
    int arr2D[ROW][COL] = { {0, }, };

    initArr(arr2D);
    printArr(arr2D);

    return 0;
}




