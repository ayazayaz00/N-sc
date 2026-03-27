#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of variables :";
    cin>>n;
    float a[n][n+1];
    cout<<"Enter augmented matrix : ";
    for(int i = 0; i<n; i++){
    	for(int j = 0; j<=n; j++){
    		cin>>a[i][j];
		}
	}
	
//	int n = 3;
//    double a[3][4] = {
//        {1, 1, 1, 6},
//        {2, 3, 1, 10},
//        {1, 2, 3, 13}
//    };

    for (int i = 0; i < n; i++) {
    
        float pivot = a[i][i];
        for (int j = 0; j <= n; j++) {
            a[i][j] /= pivot;
        }

        for (int k = 0; k < n; k++) {
            if (k != i) {
                float factor = a[k][i];
                for (int j = 0; j <= n; j++) {
                    a[k][j] -= factor * a[i][j];
                }
            }
        }
    }

    
    cout << fixed << setprecision(2);
    cout << "Solution:\n";
    cout << "x = " << a[0][3] << endl;
    cout << "y = " << a[1][3] << endl;
    cout << "z = " << a[2][3] << endl;

    return 0;
}

