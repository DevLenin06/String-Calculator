#include <iostream>
#include <string>
#include <limits>
#include "./string_calculator.h"

using std::cout, std::endl, std::cin;
using std::string;

int main() {
    string num;
    cout << "String Calculator" << endl;
    cout << "\"q\" or \"quit\" or ctrl+d to exit" << endl;
    cout << ">> ";
    getline(cin,num);
    cout << endl;

    
    string space = "    ";
    string ans;
    string lhs;
    string rhs;
  
    while (num != "q" && num != "quit") {
        int firstSpace = num.find(' ');
        //Find the first number after the spaces to start the second string
        int secondNonspace = num.find_first_not_of(' ', firstSpace+2);
     if  (num.find('+') != string::npos ) {
        lhs = num.substr(0,firstSpace);
        rhs = num.substr(secondNonspace);
        ans = add(lhs, rhs);
        cout << "ans =" << endl;
        cout << " " << endl;
        cout << space << ans << endl;
        cout << " " << endl;
        cout << ">> ";

     }else if  (num.find('*') != string::npos) {
        lhs = num.substr(0,firstSpace);
        rhs = num.substr(secondNonspace);
        ans = multiply(lhs,rhs);
        cout << "ans =" << endl; 
        cout << " " << endl;
        cout << space << ans << endl;
        cout << " " << endl;
        cout << ">> ";
     }
     getline(cin,num);
     cout << endl;
    }
        cout << "farvel!" << endl;
        return 0;
   
  

    
}

