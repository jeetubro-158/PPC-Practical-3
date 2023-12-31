# include <stdio.h>
void main(){
    int i,sum=0;
    float avg;
    for(i=1; i<=100; i++){
        //sum += i;
        sum = sum + i;
    }
    avg = sum/100;
    printf("Sum = %d\nAverage = %f", sum,avg);
}