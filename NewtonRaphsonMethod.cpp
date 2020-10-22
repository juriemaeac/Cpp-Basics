#include <iostream>
#include <iomanip>
using namespace std;
void root(double no, long long nth_root, int precise){
	double root_no,i=0,j,base=1.0;
 	long long k;
 	int precision=-1;
 	char sign='+';
while(precision!=precise)
for(;i<=no;i+=1.0/base){
	j=i;
    for(k=0;k<nth_root-1;k++)
     	j*=i;
    if(j==no){
		root_no=i;
      	base*=10;
      	precision=precise;
      	break;
    }
    else if(j>no){
		i-=1.0/base;
      	root_no=i;
      	base*=10;
      	precision++;
      	break;
    }
}
if(nth_root == 3){
 	root_no*=1;
 	cout<<setprecision(precise)<<root_no;	
}
else if (nth_root==2)
  	cout<<setprecision(precise)<<root_no;
return ;
}
int main(){
	double n;
 	long long n_root=2;
 	int precision=10;
cout<<"Nth Root:  ";
cin >> n_root;
if(n_root != 2 & n_root != 3){
	cout<<"INVALID";
}
else {
	cout <<"Number :";
 	cin >>n;	
  	if( n <0 || n > 1000000000){
	  cout << "INVALID";
  	}
  	else{
  	   root(n,n_root,precision)	;
	}
}
 return 0;
}
