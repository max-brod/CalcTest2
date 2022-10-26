# CalcTest2

### This console-only application contains basic arithmetic functions as a proof-of-learning milestone for myself and is not intended for production. Release included for testing.
[Click here to check out my old CalcTest1 application (which is no longer maintained).](https://github.com/von-de/CalcTest1)

# Version 1.1 - Application improvements

Changelog:
- Function refractor to allow improvements
- Implemented loop to "menu" (aka userInputControl) through function calls depending on the integer passed
- On subsequent returns to menu, do not show userFirstOpen message
- Exit message should now only display when entering "5" in menu to exit the program
- Changes to header file to reflect changes
- Added and commented out preprocessor directive as a reminder to include README in the future
- README now uses hyphens instead of asterisks for lists
- README and future release tags now use subscript for dates instead of regular text (retroactively applied on README)
- Updated bad descriptions in Version 1.0 release notes

#### Desired changes: 
- Switch to C++ solution for pause and clear (currently uses batch arguments passed to console)

<sub>Date of finish: 26.10.2022, 09:37 CEST</sub>

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
* Currently uses batch arguments passed to console

<sub>Date of finish: 25.10.2022, 23:51 CEST</sub>