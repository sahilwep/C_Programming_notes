//-> WAP to take input of length & breadth of ractangle and find its perimeter & area...

#include<stdio.h>

int main(void){

    int l,b,area,per;
    printf("\nEnter the Length : ");
    scanf("%d",&l);
    printf("\nEnter the breadth : ");
    scanf("%d",&b);
    
    //aera 
    area = (l*b);

    // perimeter
    per = 2*(l+b);

    printf("\nArea = %d",area);
    printf("\nPerimeter = %d",per);







    return 0;
}
