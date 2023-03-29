#include <stdio.h>
int main() {
    int h, m;
    scanf("%d %d", &h, &m);
    if (h == 0 && m < 45) {
        h = 23;
        m += 60;
        printf("%d %d", h, m-45);
    } else if (m >= 45) {
        printf("%d %d", h, m-45);
    } else {
        h -= 1;
        m += 60;
        printf("%d %d", h, m-45);
    }
}