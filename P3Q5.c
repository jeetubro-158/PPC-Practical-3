# include <stdio.h>
void main(){
    int n,f,s,i;
    printf("Enter a two digit Number: ");
    scanf("%d", &n);
    if(n>9 && n<100){
        f=n/10;
        s=n%10;
    }
    else{
    printf("Invalid Input");
    }

    for(i=1; i<=2; i++){
        if (i==1)
        f=n/10;
        else 
        f=n%10;
    switch(f){
        case 1:
        printf("one ");
        break;
        case 2:
        printf("two ");
        break;
        case 3:
        printf("three ");
        break;
        case 4:
        printf("four ");
        break;
        case 5:
        printf("five ");
        break;
        case 6:
        printf("six ");
        break;
        case 7:
        printf("seven ");
        break;
        case 8:
        printf("eight ");
        break;
        case 9:
        printf("nine ");
        break;       
    }
}

}