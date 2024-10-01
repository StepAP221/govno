#include <stdio.h>
#include <stdlib.h>
#include "max.h"
#include "min.h"
#include "diff.h"
#include "sum.h"


int main() {
    int jk;
    int arr[100];
    int trech;
    scanf("%d", &jk);
    while (trech < 100 && scanf("%d", &arr[trech]) == 1) {
        trech++;
    }
    switch (jk) {
        case 0:
            printf("%d\n", abs_max(arr, trech));
            break;
        case 1:
            printf("%d\n", abs_min(arr, trech));
            break;
        case 2:
            printf("%d\n", diff(arr, trech));
            break;
        case 3:
            printf("%d\n", sum(arr, trech));
            break;
        default:
            printf("Данные некорректны\n");
            return 0;
        }

    return 0;
}