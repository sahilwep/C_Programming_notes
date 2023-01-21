// -> WAP to calculate Equaliteral triangle..

#include<stdio.h>
#include<math.h>

int main(){
    int i,j,k,store,a;

x1:
    printf("Chose options\n1 -> Try \n2 -> Exit\n==  ");
    scanf("%d",&a);
    if(a==1){
    printf("Enter the 1st angle : ");
    scanf("%d",&i);
    printf("Enter the 2ns angle : ");
    scanf("%d",&j);
    printf("Enter the 3rd angle : ");
    scanf("%d",&k);
    int eqa = i+j+k; 
    if(i==60 && j==60 && k==60){
        printf("\nThe given angle of the triangle satisfied the condition to be equaliteral");
    }
    else if (eqa > 180 ){
        printf("\nThe given angle of the traingle are more than 180 degree\n");
        printf("\n\nTry again\n");
        goto x1;
    }

    else{
        printf("\nThe given angle of the traingle not satisfied the condition to be equaliteral");
        printf("\nTry again\n");
        goto x1;
    }
    }
    else{   // any value 2,3,4... any for exit..
        return 0;
    }
}

