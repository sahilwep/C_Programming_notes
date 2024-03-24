// Binary Search
#include <stdio.h>

void sort(int list[], int size){
    for(int i = 0 ; i < size -1 ; i++){
        for(int j = 0 ; j < size -1 ; j++){
            if(list[j] > list[j+1]){
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}

void print(int list[], int size){
    printf("\n Array List : ");
    for(int i = 0; i < size ; i++){
        printf("%d  ", list[i]);
    }
}

int binarySearch(int list[], int size, int target){
    int start = 0; 
    int end = size -1;
    int mid = ((start + end)/2);
    for(int i = start ; start <= end; i++){
        if(target == list[mid]){
            return mid;
        }
        if(target < list[mid]){
            end = mid -1;
        }
        if(target > list[mid]){
            start = mid +1;
        }
        mid = (start + end)/2;
    }

    return -1;
}

int main(void){

    int list[] = {11, 10, 9, 7, 8, 5, 6, 4, 1, 2, 3};
    int size = sizeof(list)/sizeof(list[0]);
    int target = 1;

    sort(list, size);
    print(list, size);

    int result = binarySearch(list, size, target);
    (result == -1) ? printf("\n Not Found.") : printf("\n Found at index : %d", result);

    return 0;
}