# include <stdio.h>
void main(){
    int i,j,n;
    printf("Enter the Number for calculating tabe: ");
    scanf("%d", &n);
    for(i=1; i<=10; i++){
        printf("%d * %d = %d", n,i,(n*i));
        printf("\n");
    }
}