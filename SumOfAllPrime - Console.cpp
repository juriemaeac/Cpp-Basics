#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  int num, value, c, prime; //c = checker if num variable is a prime number
  unsigned long long int total=0;
  
  cout << "Enter value: ";
  cin >> value;
  cout << "===================================================" << endl;
  
  for(num=2;num<=value;num++)
  {
    prime=1;
    for(c=2;c<(int)(sqrt(num)+1);c++)
	{
      if(num%c==0)
	  {
        prime=0;
        break;
      }
    }
    if(prime==1)
	{
      total=total+num;
    }
  }
  cout<<"The sum of all the prime numbers below " << value << " is : "<<total;
}
