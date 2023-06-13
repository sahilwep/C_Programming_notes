// Linear Search

#include <stdio.h>

int linearSearch(int list[], int size, int target){
    if(list[size] == 0 ){
        return -1;
    }
    for(int i = 0; i <= size - 1 ;i++){
        if(target == list[i]){
            return i;
        }
    }
    return -1;
}
int main(void){
    
    int list[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(list)/sizeof(list[0]);
    int target = 7;

    int result = linearSearch(list, size, target);
    (result == -1) ? printf("\n Not Found") : printf("\n Found at index : %d", result); 

    return 0;
}
