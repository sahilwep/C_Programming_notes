// Sorting : Bubble Sort.

#include <stdio.h>

void sort(int list[], int size){
    for(int i = 0 ; i < size -1; i++){
        for(int j = 0 ; j < size -1; j++){
            if(list[j] > list[j+1]){
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}

void display(int list[], int size){
    printf("\n Array list : ");
    for(int i = 0; i < size ;i++){
        printf("%d  ", list[i]);
    }
}

int main(void){
    int list[] = {10, 7, 8, 5, 6, 4, 1, 2, 3};
    int size = sizeof(list)/sizeof(list[0]);
    
    display(list, size);
    sort(list, size);
    printf("\n\n After sorted \n");
    display(list, size);

    return 0;
}