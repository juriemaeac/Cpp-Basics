#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char word[50];
    int a, length,check = 0;
    
    cout << "Enter the word: "; 
    cin >> word;
    
    length = strlen(word);
    cout << "The reversed word is: ";
    for(a=0;a < length ;a++){
        if(word[a] != word[length-a-1]){
            check = 1;
			}
   
   cout<<word[length-a-1];
	}
   cout << endl;
  
    if (check) {
        cout << word << " is not a palindrome" << endl; 
    }    
    else {
        cout << word << " is a palindrome" << endl; 
    }
}
