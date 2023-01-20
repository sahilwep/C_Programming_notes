#include<stdio.h>

int main(void){

    char arr[3][4];

    //input;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("Enter the array[%d][%d] : " ,i,j);
            scanf("%d ",&arr[i][j]);
        }
    }

    // output
    printf("array is : ")
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d  ",arr[i][j]);
        } 
        printf("\n");
    }


    return 0;
}