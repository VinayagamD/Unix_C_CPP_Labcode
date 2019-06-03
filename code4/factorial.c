//
// Created by Dell on 6/4/2019.
//
#include <stdio.h>
#include <conio.h>


int main(){

    int i, n, fact =1;
    printf("\nEnter numbers to find factorial \t");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact = fact*i;
    }

    printf("\n\n The factorial of the number %d is %d",n,fact);

    getch();

    return  0;
}