#include "max.h"

int abs_max(int arr[], int trech) {
    int max = arr[0];
    for (int i = 1; i < trech; i++) {
        if (abs(arr[i]) > abs(max)) 
        {
            max = arr[i];
        }
    }
    return max;
}