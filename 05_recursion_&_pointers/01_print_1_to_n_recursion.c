#include<stdio.h>

int rec(int x ,int y);

int main(void){

    int n;
    printf("Enter the no : ");
    scanf("%d",&n);

    rec(1,n);

    return 0;
}

int rec(int x , int y ){

    if(x>y){
        return 0;
    }
    else{

        printf("%d ",x);
        rec(x+1,y);
    }

}