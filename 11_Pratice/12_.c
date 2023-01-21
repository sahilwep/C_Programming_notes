// -> WAP to take input centimeter and convert it into meter and kilometer...

#include<stdio.h>

int main(void){
    int cm,meter,km;
    printf("\n Enter the centimeter : ");
    scanf("%d",&cm);
    meter = cm/100;     // meter = cm/100
    km = meter/1000;    // km = m/1000 or km = cm/100000

    printf("\nMeter = %d",meter);
    printf("\nkm = %d",km);    

    return 0;
}
