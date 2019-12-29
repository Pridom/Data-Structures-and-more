//
// Created by pc on 2019-12-23.
//

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

/* Randomly swaps the numbers in the array for given number of time */

void printArray(int* arr, int size) {
    int i = 0;

    for(i = 0; i < size; i++) {
        printf("    [%d]  ", i);
    }
    printf("\n");
    for(i = 0; i < size; i++) {
        printf("arr: %-4d ", arr[i]);
    }
    printf("\n");

    printf("================================================= \n");
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void randomSwap(int* arr, int num, int size) {
    int i = 0;
    int ind1 = 0, ind2 = 0;

    for(i = 0; i < num; i++) {
        while(ind1 == ind2) {
            srand((unsigned) time(NULL));
            ind1 = (random()) % size;
            ind2 = (random()) % size;
        }
        swap(&arr[ind1], &arr[ind2]);
        printf("==============%dth swap============= \n", i + 1);
        printf("Swap arr[%d] with arr[%d] \n", ind1, ind2);
        printArray(arr, size);

        ind1 = 0;
        ind2 = 0;
    }
}




int main2() {
    int i = 0;
    int size = 0;
    int num = 0;
    int* arr = 0;

    /* Dynamically allocate the integer array */
    printf("Size Num: ");
    scanf("%d %d", &size, &num);
    arr = (int*) malloc(sizeof(int) * size);

    for(i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    randomSwap(arr, num, size);

    free(arr);

    return 0;
}


