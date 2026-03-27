#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of variables :";
    cin>>n;
    float a[n][n+1], x[n];
    cout<<"Enter augmented matrix : ";
    for(int i = 0; i<n; i++){
    	for(int j = 0; j<=n; j++){
    		cin>>a[i][j];
		}
	}

//	int n = 3;
//	float x[n];
//        {1, 1, 1, 6},
//    double a[3][4] = {
//        {2, 3, 1, 10},
//        {1, 2, 3, 13}
//    };

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
	        float ratio = a[j][i]/a[i][i];
	        for (int k = 0; k <= n; k++) {
	            a[j][k] -= ratio*a[i][k];
	        }
	    }
	}

	for(int i = n-1; i>= 0; i--){
		x[i] = a[i][n];
		for(int j = i+1; j<n; j++){
			x[i] -= a[i][j] * x[j];
		}
		x[i] /= a[i][i];
	}

    
    cout <<"\nSolution :\n";
	for(int i = 0; i<n; i++){
		cout<<"x"<<i+1<<" = "<<x[i]<<endl;
	}

    return 0;
}

