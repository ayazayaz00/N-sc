#include <stdio.h>
#include <math.h>

double f(double x) {
    return x*x*x - 2*x - 5;
}

double df(double x) {
    return 3*x*x - 1;
}

int main() {
    double x0, x1;
    double error;
    int max_iter;
    int iter = 0;

    printf("Enter initial guess: ");
    scanf("%lf", &x0);

    printf("Enter desired error: ");
    scanf("%lf", &error);

    printf("Enter maximum number of iterations: ");
    scanf("%d", &max_iter);

    while (iter < max_iter) {

        if (df(x0) == 0) {
            printf("Derivative became zero. Method fails.\n");
            return 1;
        }

        x1 = x0 - f(x0) / df(x0);

        printf("Iteration %d: x = %lf, f(x) = %lf\n",
               iter + 1, x1, f(x1));

        if (fabs(x1 - x0) < error) {
            break;
        }

        x0 = x1;
        iter++;
    }

    printf("\nApproximate Root = %lf\n", x1);
    printf("Total Iterations = %d\n", iter + 1);

    return 0;
}
