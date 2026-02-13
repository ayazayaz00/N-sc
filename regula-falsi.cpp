#include<iostream>
#include<cmath>
using namespace std;
double f(double x){
	return (x*x*x - 5*x - 7);
}
int main()
{
		double a,b,c;
	     int iteration;
	     	cout<<"enter a : ";
	cin>>a;
		cout<<"enter b : ";
	cin>>b;
		cout<<"enter the value of iteration : ";
	cin>>iteration;
	
	if(f(a)*f(b)>0){
		cout<<"root does not lie in the interval";
	}
	
	for(int i=0; i<=iteration; i++){
		c = (a*f(b) - b*f(a)) / (f(b) - f(a));
		cout<< i<<"\t" <<a<<"\t"<< b<<"\t"<< c<<"\t"<< f(c)<<endl;
		if(f(c) < 0 ) {
			a = c;
			
		}
		else{
			b = c;
		}
	}
	cout <<"Approximate root is " <<c;
}
