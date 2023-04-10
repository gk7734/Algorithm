#include<stdio.h>
void abc(int a, int b, int n){
    if(n==0) {
        printf("*");
        return;
    }
    if((a/n) % 3 == 1 && (b/n) % 3 == 1)
        printf(" ");
    else
        abc(a, b, n /3 );
    return;
}
int main(){
    int n, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        for (j = 0; j < n; j++)
            abc(j, i, n);
        printf("\n");
    }
}