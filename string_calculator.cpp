#include <iostream>
#include <string>
#include "./string_calculator.h"
#include <stdexcept>

using std::cout, std::endl;
using std::string;

unsigned int digit_to_decimal(char digit) {
    // TODO(student): implement
    //charNUM is the character turned into an integer
    unsigned int charNUM;
    if ((digit >= '!' && digit <= '/' )|| (digit >= '[' && digit <= '`') || ( digit == '^') || (digit == '{') || (digit == '}')) {
        throw std::invalid_argument("");
    }else {
        charNUM = digit - '0';
    }
    return charNUM;
}

char decimal_to_digit(unsigned int decimal) {
    // TODO(student): implement
    char charactNum;
    if ((decimal >= 33 && decimal <=47) || decimal >=49) {
        throw std::invalid_argument("");
    }else {
         charactNum = decimal + 48;
    }

    return charactNum;
}

string trim_leading_zeros(string num) {
    // TODO(student): implement
    // cout << "num: " << num << endl;
    //use the at.() function with the count number as the index
    string afterTrim = "";
    unsigned int i = 0;
    unsigned int countFirst = 0;
    unsigned int countLast = num.size() - 1;

    //all 0's
    

    //find first non-zero
    while (num.at(countFirst) == '0') {
        countFirst++;
        if (countFirst == countLast) {
            break;
        }
    }
    //all 0's

    if (num.at(countFirst) == '0' && countFirst == (num.size()-1)) {
        // cout << "Entered 0 loop" << endl;
        afterTrim = "0";
        return afterTrim;
    }


    for ( i = countFirst; i <= countLast; i++ ) {
        afterTrim += num.at(i);
    }
    return afterTrim;


   
    
}

string add(string lhs, string rhs) {
    // TODO(student): implement
    unsigned int answer = 0;
    unsigned int addition;
    int i;
    unsigned int digitRhs;
    unsigned int digitLhs;
    //substring for adding 0's based on place, multiply this size by the number of 0's
    // string placeString;
    string ans = "";
    //for place value
    // unsigned int placeVal = 1;
    //to turn back into string
    char newNum;
    string backwardsAns;

    // Make into numbers







    // add 0 to the beggingin so it is same length
    // new ,   NEW CODE NEW CODE NEW CODE NEW CODE NEW CODE NEW CODE
    if (lhs.size() > 1) {
        lhs = trim_leading_zeros(lhs);
    }

    if (rhs.size() > 1) {
        rhs = trim_leading_zeros(rhs);
    }

    int carry = 0;
    int lengthRhs = rhs.size();
    int lengthLhs = lhs.size();
    int maxLength;
    if (lengthRhs > lengthLhs) {
        maxLength = lengthRhs;
    }else if (lengthRhs < lengthLhs) {
        maxLength = lengthLhs;
    }else if (lengthRhs == lengthLhs) {
        maxLength = lengthRhs;
    }

    if (lengthLhs < maxLength) {
        lhs = std::string(maxLength - lengthLhs, '0') + lhs;
    }else if (lengthRhs < maxLength) {
        rhs = std::string(maxLength - lengthRhs, '0') + rhs;
    }
    for ( i = maxLength - 1; i >=0; i--) {
        digitRhs = digit_to_decimal(rhs.at(i));
        digitLhs = digit_to_decimal(lhs.at(i));
        addition = digitRhs + digitLhs + carry;
        answer = addition %10;
        newNum = decimal_to_digit(answer);
        backwardsAns += newNum;

        carry = addition/10;


    }
    if (carry != 0) {
        answer = carry;
        newNum = decimal_to_digit(answer);
        backwardsAns += newNum;
    }

    // switch backstring 
    int b;
    for (b = backwardsAns.size() - 1; b >= 0; b--) {
        ans += backwardsAns.at(b);
    }
    
    return ans;
}

string multiply(string lhs, string rhs) {
    // TODO(student): implement
     if (lhs.size() > 1) {
        lhs = trim_leading_zeros(lhs);
    }

    if (rhs.size() > 1) {
        rhs = trim_leading_zeros(rhs);
    }
    
    string ans;
    string sum = "0";
    char newNum;
    int answer = 0;
    string partialsum;
    int multiplication;
    string factor = "";
    int carry = 0;
    int lengthRhs = rhs.size();
    int lengthLhs = lhs.size();
    string strMultiplier;
    string strMultiplicant;
    int multiplicant;
    int multiplier;
    unsigned int digitA;
    unsigned int digitB;


    if (lengthLhs < lengthRhs) {
        multiplier = lengthLhs;
        strMultiplier = lhs;
        multiplicant = lengthRhs;
        strMultiplicant = rhs;
    }else if (lengthLhs > lengthRhs) {
        multiplier = lengthRhs;
        strMultiplier = rhs;
        multiplicant = lengthLhs;
        strMultiplicant = lhs;
    }else if (lengthLhs == lengthRhs) {
        multiplier = lengthRhs;
        strMultiplier = rhs;
        multiplicant = lengthLhs;
        strMultiplicant = lhs;
    }

    int i;
    int j;
    for (i = multiplier - 1; i >= 0; i--) {
        partialsum = "";
        digitA = digit_to_decimal(strMultiplier.at(i));
        carry = 0;
        for (j = multiplicant - 1; j >= 0; j--) {
            digitB = digit_to_decimal(strMultiplicant.at(j));
            multiplication = digitA * digitB + carry;
            carry = multiplication/10;
            answer = multiplication%10;
            newNum = decimal_to_digit(answer);
            partialsum =  newNum + partialsum;
        }


        if (carry != 0) {
            answer = carry;
            newNum = decimal_to_digit(answer);
            partialsum =  newNum + partialsum;

        }
        // cout << "partial sum" << partialsum << endl;
        partialsum = partialsum + factor;
        factor = factor + "0";
        ans = add(ans, partialsum);

        // string newPartialsum = "";
        // int b;
        // for (b = partialsum.size() - 1; b >= 0; b--) {
        // newPartialsum += partialsum.at(b);
    }
    

    return ans;
}
