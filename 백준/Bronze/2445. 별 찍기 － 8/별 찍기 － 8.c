#include <stdio.h>

int main() {
    int n, i, j, k, i1, j1, k1, i2, j2, k3, i3;
    scanf("%d", &n);
    for(i=0; i<n-1; i++){
        for(j=0; j<i+1; j++)
            printf("*");
        for(k=n-1; k>i; k--)
            printf(" ");
        for(i1=n-1; i1>i; i1--)
            printf(" ");
        for(j1=0; j1<i+1; j1++)
            printf("*");
        printf("\n");
    }
    for(k1=0; k1<n; k1++){
        for(j2=n; j2>k1; j2--)
            printf("*");
        for(i2=0; i2<k1; i2++)
            printf(" ");
        for(k3=0; k3<k1; k3++)
            printf(" ");
        for(i3=n; i3>k1; i3--)
            printf("*");
        printf("\n");
    }
}