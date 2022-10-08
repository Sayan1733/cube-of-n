#include <iostream>
#include <cmath>
#include <conio.h>
//cube of N.
using namespace std;

int main() 
{
	/* (This is the normal process for a normal codder
	     without using any header file)*/
	
	int a,b; 					// declare two variable b for result and a for taking no.
	
	cout<<"Enter The Number:";
	cin>>a;						//taking user input for N.
	
	b=(a*a*a);					//result = N*N*N
	
	cout<<"The cube of "<<a<<" is: "<<b<<" (normal process)"<<endl;
	
	cout<<" "<<endl;
	
	/* (This is using cmath header file) */
	
	double N,result;		// declare two variable one for result and one for taking no.
	
	cout<<"Enter The Number:";		
	cin>>N;					//taking user input for no.
	
	result=pow(N,3);		//using pow function of cmath library for power here pow(n,3) for power of n is 3.
	
	cout<<"The cube of "<<a<<" is: "<<result<<" (using cmath library)"<<endl;
	
	getch();
	return 0;
}
