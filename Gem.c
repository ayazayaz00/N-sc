#include <stdio.h>
int main() {
	int i, j, k;
//    int n;
//    printf("Enter the number of variables :");
//    scanf("%d", n);
//    float a[n][n+1], x[n];
//    printf("Enter augmented matrix : ");
//    for(i = 0; i < n; i++){
//    	for(j = 0; j<=n; j++){
//    		scanf("%d", a[i][j]);
//		}
//	}

	int n = 3;
	double x[n];
        
    double a[3][4] = {
    	{1, 1, 1, 6},
        {2, 3, 1, 10},
        {1, 2, 3, 13}
    };

    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
	        double ratio = a[j][i]/a[i][i];
	        for (k = 0; k <= n; k++) {
	            a[j][k] -= ratio*a[i][k];
	        }
	    }
	}

	for(i = n-1; i>= 0; i--){
		x[i] = a[i][n];
		for(j = i+1; j<n; j++){
			x[i] -= a[i][j] * x[j];
		}
		x[i] /= a[i][i];
	}

    
    printf("\nSolution : \n");
	for(i = 0; i<n; i++){
		printf("x%d = %.2lf\n", i+1, x[i]);
	}

    return 0;
}

