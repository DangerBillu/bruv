#include <stdio.h>

// floyd's triangle
int main() {
    int n, i, j, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("\nFloyd's Triangle:\n");

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d\t", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}

// multiplication table
#include <stdio.h>
int main() {
    int limit, i, j;

    printf("Enter the limit (till which you want tables): ");
    scanf("%d", &limit);

    printf("\nMultiplication Tables from 1 to %d:\n\n", limit);

    for (i = 1; i <= limit; i++) {
        printf("Table of %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}

// sine series
#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double x, term, sum = 0;
    int sign = 1;

    printf("Enter the angle in degrees: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // convert degrees to radians
    x = x * 3.14159 / 180.0;

    for (i = 1; i <= n; i++) {
        int j;
        double fact = 1;
        int power = 2 * i - 1;

        for (j = 1; j <= power; j++) {
            fact *= j;
        }

        term = sign * pow(x, power) / fact;
        sum += term;

        sign *= -1;
    }

    printf("\nCalculated sin(x) = %.6lf\n", sum);
    printf("Using math.h sin(x) = %.6lf\n", sin(x));

    return 0;
}

