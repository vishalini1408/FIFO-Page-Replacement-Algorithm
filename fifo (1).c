#include <stdio.h>

int main() {
    int q[3], f = 0, n = 0, p[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        if (n == 3) {
            printf("Removed Packet %d\n", q[f]);
            f = (f + 1) % 3;
            n--;
        }
        q[(f + n) % 3] = p[i];
        n++;
        printf("Added Packet %d\n", p[i]);
    }

    return 0;
}
