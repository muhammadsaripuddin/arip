#include <iostream>
#include <cmath>
#include<stdio.h>
using namespace std;

int main(){
	
	
	double a1[5];
	double a2[5]; 
	double a3[5];
	
	double Ra1[5];
	double Ra2[5];
	double Ra3[5];
	
	double RWa1[5];
	double RWa2[5];
	double RWa3[5];
		
	double w[5];
	double m[5];
	double ha[3];
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	
	w[0]=5;
	w[1]=3;
	w[2]=4;
	w[3]=4;
	w[4]=2;
	
	a1[0]=4;
	a1[1]=4;
	a1[2]=5;
	a1[3]=3;
	a1[4]=3;
	
	a2[0]=3;
	a2[1]=3;
	a2[2]=4;
	a2[3]=2;
	a2[4]=3;
	
	a3[0]=5;
	a3[1]=4;
	a3[2]=2;
	a3[3]=2;
	a3[4]=2;

	m[0]=max(a1[0],max(a2[0],a3[0]));
	m[1]=max(a1[1],max(a2[1],a3[1]));
	m[2]=max(a1[2],max(a2[2],a3[2]));
	m[3]=max(a1[3],max(a2[3],a3[3]));
	m[4]=max(a1[4],max(a2[4],a3[4]));

	Ra1[0] = (a1[0]/m[0]);
	Ra1[1] = (a1[1]/m[1]);
	Ra1[2] = (a1[2]/m[2]);
	Ra1[3] = (a1[3]/m[3]);
	Ra1[4] = (a1[4]/m[4]);
	
	Ra2[0] = (a2[0]/m[0]);
	Ra2[1] = (a2[1]/m[1]);
	Ra2[2] = (a2[2]/m[2]);
	Ra2[3] = (a2[3]/m[3]);
	Ra2[4] = (a2[4]/m[4]);
	
	Ra3[0] = (a3[0]/m[0]);
	Ra3[1] = (a3[1]/m[1]);
	Ra3[2] = (a3[2]/m[2]);
	Ra3[3] = (a3[3]/m[3]);
	Ra3[4] = (a3[4]/m[4]);
	
	RWa1[0] = Ra1[0]*w[0];
	RWa1[1] = Ra1[1]*w[1];
	RWa1[2] = Ra1[2]*w[2];
	RWa1[3] = Ra1[3]*w[3];
	RWa1[4] = Ra1[4]*w[4];

	RWa2[0] = Ra2[0]*w[0];
	RWa2[1] = Ra2[1]*w[1];
	RWa2[2] = Ra2[2]*w[2];
	RWa2[3] = Ra2[3]*w[3];
	RWa2[4] = Ra2[4]*w[4];
	
	RWa3[0] = Ra3[0]*w[0];
	RWa3[1] = Ra3[1]*w[1];
	RWa3[2] = Ra3[2]*w[2];
	RWa3[3] = Ra3[3]*w[3];
	RWa3[4] = Ra3[4]*w[4];
}
