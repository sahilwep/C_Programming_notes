//   -> WAP to print 0 to n using the recursion
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
        printf(" %d ", x);
        func(x+1,y);
    }


}