//  WAP to take the input from users into 2D Array & print the output.

#include <stdio.h>

int main(void){

    int list[3][3];

    // intput
    for(int i= 0 ; i< 3; i++){
        for(int j = 0 ; j< 3; j++){
            printf("Element at index of list[%d][%d] : ", i,j);
            scanf("%d", &list[i][j]);
        }
    }

    // output
    printf("\n\n");
    for(int i= 0 ; i <  3; i++){
        for(int j = 0 ; j < 3; j++){
            printf("%d  ", list[i][j]);
        }
        printf("\n");
    }

    return 0;
} 
