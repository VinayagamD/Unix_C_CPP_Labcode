//
// Created by Dell on 6/4/2019.
//
#include <stdio.h>
#include <conio.h>


int main(){
    int num, r, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (temp = num; num!=0; num = num/10) {
        r = num%10;
        sum = sum*10+r;
    }
    if(temp == sum)
        printf("%d is a palindrome",temp);
    else
        printf("%d is not a palindrome",temp);
    getch();
    return  0;
}
