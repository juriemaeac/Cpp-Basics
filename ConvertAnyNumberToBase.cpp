#include <bits/stdc++.h>
using namespace std;
int main() {
    string s="";
    string d="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    long long num,num1,base;
        cout << "Enter base:  ";
        cin>>base;
        cout << "Enter Number:   ";
        cin>>num;
        num1=num;
    if(base>20 || base<2){
        cout<<"INVALID";
        return 0;
    }
        do
            s+=d[num%base];
        while (num /=base);
       reverse(s.begin(),s.end());
        cout<<"The conversion of "<<num1<<" to base "<<base<<" is : "<<s<<endl;
      return 0;
}

