# String Calculator

## Overview
The String Calculator is a C++ program designed to perform basic arithmetic operations (addition and multiplication) on numbers inputted as strings. It handles extremely large numbers  by processing them character by character.

## Features
- **Addition**: Add two numbers inputted as strings.
- **Multiplication**: Multiply two numbers inputted as strings.
- **Trim Leading Zeros**: Remove unnecessary leading zeros from input numbers.
- Handles inputs interactively with a user-friendly interface.

## How It Works
- The program takes input strings from the user.
- Determines the operation based on the input format (e.g., contains `+` or `*`).
- Uses helper functions to process the arithmetic operations.
- Returns the result as a formatted string.

## File Structure
```
project-directory/
├── string_calculator.h      # Header file containing function declarations and documentation.
├── string_calculator.cpp    # Implementation of the string calculator functions.
├── main.cpp                 # Main program to run the interactive calculator.
```

## Functions
### `digit_to_decimal(char digit)`
Converts a character digit to its integer equivalent.
- **Input**: A character representing a digit (e.g., `'7'`).
- **Output**: The corresponding integer value (e.g., `7`).
- **Throws**: `std::invalid_argument` if the input is not a valid digit.

### `decimal_to_digit(unsigned int decimal)`
Converts an integer digit to its character equivalent.
- **Input**: An integer representing a single digit (e.g., `7`).
- **Output**: The corresponding character (e.g., `'7'`).
- **Throws**: `std::invalid_argument` if the input is not valid.

### `trim_leading_zeros(std::string num)`
Removes leading zeros from a string representation of a number.
- **Input**: A string with leading zeros (e.g., `"000123"`).
- **Output**: A string without leading zeros (e.g., `"123"`).

### `add(std::string lhs, std::string rhs)`
Adds two numbers represented as strings.
- **Input**: Two strings (e.g., `"123"`, `"456"`).
- **Output**: The sum as a string (e.g., `"579"`).

### `multiply(std::string lhs, std::string rhs)`
Multiplies two numbers represented as strings.
- **Input**: Two strings (e.g., `"123"`, `"456"`).
- **Output**: The product as a string (e.g., `"56088"`).

## Usage
1. Compile the project:
   ```
   g++ -o string_calculator main.cpp string_calculator.cpp
   ```
2. Run the program:
   ```
   ./string_calculator
   ```
3. Follow the interactive prompts:
   - Enter a calculation (e.g., `123 + 456` or `789 * 123`).
   - Type `q` or `quit` to exit.

### Example Interaction
```
String Calculator
"q" or "quit" or ctrl+d to exit
>> 123 + 456
ans =
    579
>> 789 * 123
ans =
    97047
>> quit
farvel!
```

## Requirements
- C++ compiler (e.g., GCC)
- Basic knowledge of command-line operations

## Future Improvements
- Add support for subtraction and division.
- Enhance input validation to handle more edge cases.
- Provide a graphical user interface (GUI).



