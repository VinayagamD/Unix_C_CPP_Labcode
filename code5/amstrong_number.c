//
// Created by Dell on 6/4/2019.
//

#include <stdio.h>
#include <conio.h>

int main(){

    int num,r,sum=0,temp;
    printf("Enter a number. ");
    scanf("%d",&num);
    temp=num;
    while (num!=0){
        r = num%10;
        num = num/10;
        sum += r*r*r;
    }
    if(sum == temp)
        printf("%d is an Armstrong number",temp);
    else
        printf("%d is not an Armstrong number",temp);
    getch();

    return 0;
}

