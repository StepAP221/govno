#include "min.h"

int abs_min(int arr[], int trech) {
    int min = arr[0];
    for (int i = 1; i < trech; i++) {
        if (abs(arr[i]) < abs(min))
         {
            min = arr[i];
        }
    }
    return min;
}