//
// Created by Dell on 6/4/2019.
//
#include <stdio.h>
#include <conio.h>

int main(){
    int k,r;
    long int i =0, j=1,f;
    printf("Enter the number range:");
    scanf("%d",&r);
    printf("Fibonacci Series: \n");
    printf("%ld %ld ",i, j);
    for(k=2;k<r;k++){
        f = i+j;
        i =j;
        j=f;
        printf("%ld ",j);
    }
    getch();
    return 0;
}
