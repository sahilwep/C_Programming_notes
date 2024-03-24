// 43  -> WAP to print any table using the recursion

#include<stdio.h>

int func(int x ,int y);

int main(){
    int num;
    printf("\nEnter the no : ");
    scanf("%d",&num);
    func(1,num);
    return 0;
}


int func(int x ,int y){
    printf("\n %d x %d = %d ",y, x, y*x);
    if(x<10){
        return func(x+1,y);
    }
 
}