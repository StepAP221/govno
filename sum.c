#include "sum.h"


int sum(int arr[], int trech) {
    int max_index = 0;
    for (int i = 1; i < trech; i++) {
        if (abs(arr[i]) > abs(arr[max_index])) 
        {
            max_index = i;
        }
    }
    int schet = 0;
    for (int i = max_index; i < trech; i++) {
       schet += arr[i];
    }
    return schet;
}