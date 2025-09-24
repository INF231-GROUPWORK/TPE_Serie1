#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("enter the size: ");
    scanf("%d", &n);
    int t[n];
    printf("enter the numbers: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (t[j] > t[j+1]) {
                temp = t[j];
                t[j] = t[j+1];
                t[j+1] = temp;
            }
        }
    }

    double med;
    if (n%2 == 0) {
        med = (t[n/2-1] + t[n/2])/2;
    } else {
        med = t[n/2];
    }

    printf("Median = %.2f\n", med);
    return 0;
}

