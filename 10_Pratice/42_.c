//   -> WAP to print 0 to ne using the recursion
#include<stdio.h>

int func(int x ,int y);

int main(){
    int num;
    printf("\nEnter the no : ");
    scanf("%d",&num);
    func(0,num);
    return 0;
}


int func(int x ,int y){
    if(x>y){
        return 0;
    }
    else{
        func(x+1,y);
        printf(" %d ", x);
    }


}