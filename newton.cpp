#include <iostream>
#include <cmath>

using namespace std;

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

    cout << "Enter initial guess: ";
    cin >> x0;

    cout << "Enter desired error: ";
    cin >> error;

    cout << "Enter maximum number of iterations: ";
    cin >> max_iter;

    while (iter < max_iter) {

        if (df(x0) == 0) {
            cout << "Derivative became zero. Method fails." << endl;
            return 1;
        }

        x1 = x0 - f(x0) / df(x0);

        cout << "Iteration " << iter + 1
             << ": x = " << x1
             << ", f(x) = " << f(x1) << endl;

        if (fabs(x1 - x0) < error) {
            break;
        }

        x0 = x1;
        iter++;
    }

    cout << "\nApproximate Root = " << x1 << endl;
    cout << "Total Iterations = " << iter + 1 << endl;

    return 0;
}
