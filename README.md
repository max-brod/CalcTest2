# CalcTest2

### This console-only application contains basic arithmetic functions as a proof-of-learning milestone for myself and is not intended for production. Release included for testing.

# Version 1.0 - Initial release

Features:
* Forward declarations through a guarded header
* Separate functions dedicated to each program segment:

   * Main function
   * "First Open" function (introduction message on first open)
   * Input function (returns user input to main)
   * If function (takes input from main and calls one of the following functions depending on given input; returns 0 on invalid input)
   * Addition function (returns to if)
   * Subtraction function (returns to if)
   * Multiplication function (returns to if)
   * Division function (returns to if)
   * Exit function (called after if returns to main and shows a message and waits for user confirmation to exit the program)

* Simple 5 choices prompt with user input (through "cin")
* Basic addition (first and second summand)
* Basic subtraction (minuend and subtrahend)
* Basic multiplication (first and second factor)
* Basic division (dividend and divisor)
(To be improved: Invalid entries return prematurely to main and subsequently cause a program exit)
* Currently uses system calls to pause and clear

Date of finish: 25.10.2022, 23:51 CEST