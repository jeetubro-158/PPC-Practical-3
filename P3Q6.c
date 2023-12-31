# include <stdio.h>
void main(){
    int i,j,n1,n2;
    printf("Enter the range for table: \n");
    scanf("%d%d", &n1,&n2);
    for(i=n1; i<=n2; i++){
        for(j=1; j<=10; j++){
            printf("%d",(i*j));
            printf("\t");
        }
        printf("\n");
    }
}