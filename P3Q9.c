# include <stdio.h>
void main(){
    int i,count=0,n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for(i=2; i<=n; i++){
        if (n % i == 0){
            count++;
        }        
    }
    if(count == 1){
        printf("%d is a prime number.", n);
    }
    else
    printf("%d is not a prime number.", n);
}