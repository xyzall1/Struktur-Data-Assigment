#include <iostream>

using namespace std;

void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;

    for (i = 1; i < length; i ++) {
        j = 1;
        
        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j- 1];
            arr[j- 1] = tmp;
            j--;
        }//end of while loop
    }//emd of for loop
}