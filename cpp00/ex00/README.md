# Cpp00 - Ex00

**Description**

The goal of this project is to create a simple C++ program called Megaphone.
The program takes the arguments passed on the command line and prints them in uppercase.
If no arguments are provided, the program prints a default message.

This exercise is meant to get familiar with:
- C++ basic syntax
- std::cout
- command line arguments
- basic character manipulation


**Compilation**

c++ -Wall -Wextra -Werror megaphone.cpp -o megaphone

**Implementation Details**

- The program checks if the number of arguments (ac) is equal to 1.
- If ac == 1, it prints the default message.
- Otherwise, it loops through each argument starting from av[1].
- Each character of every argument is converted to uppercase using 'std::toupper'.
- A space is printed between arguments, but not after the last one.
- A newline is printed at the end using 'std::endl'.

**Expected Behavior**

1. The program ignores the program name (av[0]).
2. Non-alphabetical characters remain unchanged.
3. The output always ends with a newline.