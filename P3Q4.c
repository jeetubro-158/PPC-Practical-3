# include <stdio.h>
void main(){
    int n;
    printf("Enter a month number: ");
    scanf("%d", &n);
    switch(n){
        case 1:
        printf("JANUARY");
        break;
        case 2:
        printf("FEBRUARY");
        break;
        case 3:
        printf("MARCH");
        break;
        case 4:
        printf("APRIL");
        break;
        case 5:
        printf("MAY");
        break;
        case 6:
        printf("JUNE");
        break;
        default:
        printf("Invalid Input");
        break;
    }
}