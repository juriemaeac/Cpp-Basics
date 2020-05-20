#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

long double separator (string delim) 
{
	for(int i=0; i<=delim.size(); i++) 
	{
		if(delim[i] == ',') 
		{
			delim.erase(i,1);
		}
		if(delim[i] == '.') 
		{
			delim.erase(i,1);
		}
	}
	return atoll(delim.c_str());
}

string number (long long value) {

	string ones[] = {" ", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine ", "Ten ",
	                 "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen "
	                };
	string tens[] = {"Twenty ","Thirty ","Fourty ","Fifty ","Sixty ","Seventy ","Eighty ","Ninety "};

	if (value == 0) {
		return "Zero ";
	} 
	else if (value >= 1 and value < 10) {
		return ones[value];
	} 
	else if (value >= 10 and value < 20) {
		return ones[value];
	} 
	else if (value >= 20 and value < 100) {
		return tens[(value / 10) - 2] + ones[value % 10];
	} 
	else if (value < 1000) {
		return number (value / 100) + "Hundred " + ((value % 100 != 0) ? " " + number (value % 100) : "");
	} 
	else if (value < 1000000) {
		return number (value / 1000) + "Thousand" + ((value % 1000 != 0) ? " " + number (value % 1000) : "");
	} 
	else if (value < 1000000000) {
		return number (value / 1000000) + "Million" + ((value % 1000000 != 0) ? " " + number (value % 1000000) : "");
	} 
	else if (value < 1000000000000) {
		return number(value / 1000000000) + "Billion" + ((value % 1000000000 != 0) ? " " + number(value % 1000000000) : "");
	} 
	else if (value < 1000000000000000) {
		return number(value / 1000000000000) + "Trillion" + ((value % 1000000000000 != 0) ? " " + number(value % 1000000000000) : "");
	}
}


int main () {
	string currency_unit, currency_value;
	long long out;
	
	cout << "FORMAT: Currency unit (PHP/VND/USD) followed by a space then the amount seperated by a comma with two decimal places (E.g. 12,345,678.99)"<<endl << 
	"NOTE: Any currency unit is acceptable in this Cheque Maker. There is no limits or restraints." << 
	endl<< "===============================================================================================" << endl << endl <<
	"Enter Currency unit and Value:  " << endl;
	 
	cin >> currency_unit;
	cin >> currency_value;
	
	out = separator(currency_value);
	
		if (!out) {
			cout << "Invalid input. Please try again.";
		} 
		else if (out <= 100000000000099 and out >= 0.01) {
			cout << number(out/100) << " " << currency_unit << " and " << number((out%100)) << " Cents";
		}
		else {
			cout << "invalid input. Please try again.";
		}
		
	return 0;
}
