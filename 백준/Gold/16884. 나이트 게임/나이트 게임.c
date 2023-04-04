#include<stdio.h>
int main(){
    int n;
    int a[101];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i]%2==0)
            printf("cubelover\n");
        else printf("koosaga\n");
    }
}