#include <stdio.h>
int main() {
//    int n;
//    cout<<"Enter the number of variables :";
//    cin>>n;
//    float a[n][n+1];
//    cout<<"Enter augmented matrix : ";
//    for(int i = 0; i<n; i++){
//    	for(int j = 0; j<=n; j++){
//    		cin>>a[i][j];
//		}
//	}
	
	int i,j,k;
	int n = 3;
    double a[3][4] = {
        {1, 1, 1, 6},
        {2, 3, 1, 10},
        {1, 2, 3, 13}
    };

    for (i = 0; i < n; i++) {
    
        float pivot = a[i][i];
        for (j = 0; j <= n; j++) {
            a[i][j] /= pivot;
        }

        for (k = 0; k < n; k++) {
            if (k != i) {
                float factor = a[k][i];
                for (j = 0; j <= n; j++) {
                    a[k][j] -= factor * a[i][j];
                }
            }
        }
    }

	printf("\nSolution\n : ");
	printf("x = %.2lf \ny = %.2lf \nz=%.2lf", a[0][3], a[1][3],a[2][3]);
    return 0;
}

