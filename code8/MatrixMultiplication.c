//
// Created by Dell on 6/6/2019.
//

#include <stdio.h>
#include <conio.h>

int main(){
    int a[5][5],b[5][5],c[5][5],i,j,k,m,sum,n,o,p;
    printf("\nEnter the row and column of first matrix");
    scanf("%d%d",&m,&n);
    printf("\nEnter the row  and column of second matrix");
    scanf("%d%d",&o,&p);
    printf("\nEnter the first matrix->");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter the Second matrix->");
    for(i=0;i<o;i++){
        for(j=0;j<p;j++){
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n The First matrix is\n");

    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
    }
    printf("\n The Second matrix is\n");

    for(i=0;i<o;i++){
        printf("\n");
        for(j=0;j<p;j++){
            printf("%d\t",b[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            sum =0;
            for(k=0;k<n;k++){
                sum =sum+a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
    }

    printf("\n The Multiplication of two matrix is\n");

    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<p;j++){
            printf("%d\t",c[i][j]);
        }
    }
    return 0;
}