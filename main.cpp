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

    
    
//Debug for first function
    // char digit;
    // cout << "Enter your character digit: " << endl;
    // cin >> digit;
    // unsigned int number = digit_to_decimal(digit);
    
    // cout << "Character digit: " << digit << endl;
    // cout << "digit: " << number << endl;

//Debug for second function
    //   int decimal;
    //   cout << "Enter your number: " << endl;
    //   cin >> decimal;
    //   char charactNum = decimal_to_digit(decimal);

    //   cout << "Integer number: " << decimal << endl;
    //   cout << "Character number: " << charactNum << endl;

//Debug for third function
    // string num;
    // string Trim = " ";
    // cout << "Enter your number: " << endl;
    // cin >> num;
    // if (num == "q" || num == "quit") {
    //     return 0;
    // }else {
    //     string Trim = trim_leading_zeros(num);
    //     cout << "Before trim: " << num << endl;
    //     cout << "After trim: " << Trim << endl;

    // }

//Debug add function
    // cout << "Enter your number: " << endl;
    string space = "    ";
    string ans;
    string lhs;
    string rhs;
    //get rid of first space
    //find first space index
    // cout << "NUM: " << num << endl;
    // int firstSpace = num.find(' ');
    // //Find the first number after the spaces to start the second string
    // int secondNonspace = num.find_first_not_of(' ', firstSpace+2);
  
    while (num != "q" && num != "quit") {
        int firstSpace = num.find(' ');
        //Find the first number after the spaces to start the second string
        int secondNonspace = num.find_first_not_of(' ', firstSpace+2);
        // cout << " " << endl;
        // cout << "farvel!" << endl;
        // cout << " " << endl;
        // return 0;
        // cout << "num 2: " << num << endl;
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
    //  while ( num!= "q" || num != "quit") {
    //     getline(cin,num);
    //     if  (num.find('+') != string::npos ) {
    //     lhs = num.substr(0,firstSpace);
    //     rhs = num.substr(secondNonspace);
    //     ans = add(lhs, rhs);
    //     cout << "ans =" << endl;
    //     cout << " " << endl;
    //     cout << space << ans << endl;
    //     cout << " " << endl;
    //     cout << ">> ";

    //     }else if  (num.find('*') != string::npos) {
    //         lhs = num.substr(0,firstSpace);
    //         rhs = num.substr(secondNonspace);
    //         ans = multiply(lhs,rhs);
    //         cout << "ans =" << endl; 
    //         cout << " " << endl;
    //         cout << space << ans << endl;
    //         cout << " " << endl;
    //         cout << ">> ";

    //     }

    // if (num == "q" || num == "quit") {
    //     cout << " " << endl;
    //     cout << "farvel!" << endl;
    //     cout << " " << endl;
    //     return 0;
    // }

    



    







    

    
    // TODO(student): implement the UI
    
}

