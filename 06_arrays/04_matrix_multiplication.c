#include<stdio.h>

int main(){

    int arr[3][3]={{2,3,4},{1,2,3},{1,3,4}};
    int brr[3][3]={{1,2,3},{3,1,3},{1,3,4}};
    int crr[3][3];

    // operations
    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            crr[i][j]=0;
            for(int k =0; k<3; k++){
                crr[i][j]+=arr[i][k]*brr[k][j];
            }
        }

    }
    // print the output
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }

    return 0;
}