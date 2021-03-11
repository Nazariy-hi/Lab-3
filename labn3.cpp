#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a,b,z,y, x1, x2, x;
	x1 = 0;
	x2 = 98;
	int w;
	cout <<"Enter the number of cases ";
	cin >>w;
	switch (w)
{
	case 1:
	a = 0.6; 
	b = 1.1; 
	for ( x = x1; x < x2; x = x + 0.5)
	{
		if ((x > a) && (x  <= pow(b, 3.5)))
		y = a + log (abs( a + b * x ))-2*x;
		else if ( x <= a) 
		y = exp (a * x) - 3.5 * pow(cos( tan ( b * x ) + b * x), 2);
		else if (x > pow (b,3.5)) 
		y = a + pow(cos(a + b * x * tan ( b * x )),3.5);
		cout <<"y(" <<x<< ") = " << y <<endl;
	}
		   break;
	case 2:
		a = 1.2;
		b = 2.3;
		x = x1;
	while (x < x2)
	{
		if ((x > a) && (x  <= pow(b, 3.5)))
		y = a + log (abs( a + b * x ))-2*x;
		else if ( x <= a) 
		y = exp (a * x) - 3.5 * pow(cos( tan ( b * x ) + b * x), 2);
		else if (x > pow (b,3.5)) 
		y = a + pow(cos(a + b * x * tan ( b * x )),3.5);
		cout <<"y(" <<x<< ") = " << y <<endl;
		x = x + 0.5;
	}
			break;
			
	case 3:
		a = 2.2;
		b = 4.5;
		x = x1;
		do { 
		if ((x > a) && (x  <= pow(b, 3.5)))
		y = a + log (abs( a + b * x ))-2*x;
		else if ( x <= a) 
		y = exp (a * x) - 3.5 * pow(cos( tan ( b * x ) + b * x), 2);
		else if (x > pow (b,3.5)) 
		y = a + pow(cos(a + b * x * tan ( b * x )),3.5);
		cout <<"y(" <<x<< ") = " << y <<endl;
		x = x + 0.5;
		}
		while ( x < x2);
		break;
	
}
}
	 	
		
