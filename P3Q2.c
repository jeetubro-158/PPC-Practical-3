# include <stdio.h>
void main(){
    int i,j,n=2,sum=0;
    for(i=1; i<=20; i++){
        sum = sum + n;
        n=n+2;
    }
    printf("Sum of first 20 even numbers= %d\n", sum);
}