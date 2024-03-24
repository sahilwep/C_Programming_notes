//-> WAP to find compound intrest...

#include<stdio.h>
#include<math.h>

int main(void){
    
    double p,r,t,result,amount;      // p = principle, r = rate, t = time, amount = store amount, result = store the result (i use double datatype )
    
    // inputs..
    printf("\nEnter the Principle : "); // for pinciple
    scanf("%lf",&p);
    printf("\nEnter the rate : ");      // for rate
    scanf("%lf",&r);
    printf("\nEnter the time : ");      // for time
    scanf("%lf",&t);
    
    // operations..
    amount = p*(pow((1+r/100),t));
    result = amount - p;
    /*  Amount = Principle*((1 + rate/100)power_time)
        compound intrest = Amount - principal

        i use pow() function from the module math.h

        pow(15,2);  => it will do the 15 square => 225
        same
        pow((1+r/100),t)  
    */
    printf("The Compound intrest is : %lf",result);
    
    return 0;
}