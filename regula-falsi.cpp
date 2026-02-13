#include<iostream>
#include<cmath>
using namespace std;
float f (float x)
{
 return (x*x*x-5*x-7);
// return (x*x*x-x+1);
}
int main(){
 	float a,b,c;
	int n;
 	cout<<"enter initial approximation of the root : ";
 	cin>>a>>b;
 	if (f(a)*f(b)>=0){
 	   cout<<"Root may not be lying between a & b"<<endl;
 	   return 1;
	}
 	for(n=1;n<=15;n++)
 	{
 		c=(b*f(a)-a*f(b))/(f(a)-f(b));
 		if (fabs(f(c))< 1e-6){
 		   break;
		}
 		if (f(a)*f(c)<0)
		{
		   b=c;
		}
 		else {
 		   a=c;
		}
	}cout<<"Root : "<<c<<endl;
	return 0;
} 
