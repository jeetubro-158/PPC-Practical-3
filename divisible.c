#include <stdio.h>

int main() {
    int number,i,tab;

    // Input the number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // To Check if the number is divisible by both 5 and 7
    if (number % 5 == 0 && number % 7 == 0) {
        printf("%d is divisible by both 5 and 7.Therefore,\n", number);
        printf("Here is the table for %d.\n", number);
for(i = 1; i <= 10; i++){
tab=number*i;
printf("%d * %d = %d\n",number,i,tab);
}

    } else {
        printf("%d is not divisible by both 5 and 7.\n", number);
    }



    return 0;
}
