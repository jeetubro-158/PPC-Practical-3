#include <stdio.h>

int main() {
    int n, n1, n2, i, tab;
    int m =0;
    printf("Define the range\n");
    printf("Enter the first value to start from: ");
    scanf("%d", &n1);
    printf("Enter the last value to end up: ");
    scanf("%d", &n2);
    printf("Enter the table whose table you want: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) 
    {
        tab = n * i;
        if (tab >= n1 && tab <= n2) {
            printf("%d * %d = %d\n", n, i, tab);
            m++;
        }
        
    }

    if (m < 10){ 
    printf("The given range is not enough to make 10 multiples of %d.\n",n); }
    printf("%d", m);

    return 0;
}