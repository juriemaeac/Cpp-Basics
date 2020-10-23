#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
long double PI=3.1415926535897932384650288;
double sinx(double x){
  double sign=1;
  if (x<0){
    sign=-1.0;
    x=-x;
  }
  if (x>360) x -= int(x/360)*360;
  x*=PI/180.0;
  double res=0;
  double term=x;
  int k=1;
  while (res+term!=res){
    res+=term;
    k+=2;
    term*=-x*x/k/(k-1);
  }
  return sign*res;
}

double cosx(double x){
  if (x<0) x=-x;
  if (x>360) x -= int(x/360)*360;
  x*=PI/180.0;
  double res=0;
  double term=1;
  int k=0;
  while (res+term!=res){
    res+=term;
    k+=2;
    term*=-x*x/k/(k-1);
  }  
  return res;
}

int main(){
const string SIN = "sin";
const string COS = "cos";
const string TAN = "tan";
const string PHI = "pi";
const string E = "e";
int n;
string s;
cout << "FORMAT: Input first the name (cos, sin, etc) then a space, then the value.\n\n" 
<< "Enter function / constant and value:  ";
cin>>s;

if (s == SIN){
cin>>n;
if (0 <= n && n <= 90){
double sn = sinx(n);
cout<<sn<<endl; }
else {
		cout << "Value Invalid. Please try again.";
	}
}

else if (s == COS)  {
cin>>n;
if (0 <= n && n <= 90){
double c = cosx(n);
if(n==90){
	cout<<"0"<<endl;
}
else{
cout<<c<<endl;}
}
else {
		cout << "Value Invalid. Please try again.";
	}
}

else if (s == TAN){
cin>>n;
if (0 <= n && n <= 90){
double tan = (sinx(n))/(cosx(n));
if(n==90){
	cout<<"infinite"<<endl;
}
else{
cout<<tan<<endl;}
}
else {
		cout << "Value Invalid. Please try again.";
	}
}

else if (s == PHI){
cout<<setprecision(11)<<PI<<endl;
}

else if (s == E){
   cin >> n;
   if (0 <= n && n <= 1000000000){
int A, B;
    double E, D;
     
    for (A=1; A<=15; A++ )
    {
        D=1;
        for (B=1; B<=A ; B++ )
        {
            D = D * B;
        }
        E = E + 1 / D;
    }
    long double Y = E+1;
    cout<<setprecision(15)<< pow(Y,n)<<endl;
}
	else {
		cout << "Value Invalid. Please try again.";
	}
	}
	
else{
cout<<"Invalid";
}
 return 0;}

