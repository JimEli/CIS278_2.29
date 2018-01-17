/*************************************************************************
* Title: Table
* File: CIS278_Week1_2.29.cpp
* Author: James Eli
* Date: 1/17/2018
*
* Exercise 2.29 on page 71 - (Table) Using the techniques of this chapter,
* write a program that calculate the squares and cubes of the integers
* from 0 to 10. Use tabs to print the following neatly formatted table of
* values:
*
*   integer square  cube
*   0       0       0
*   1       1       1
*   2       4       8
*  . . .
*   8       64      512
*   9       81      729
*  10       100     1000
*
* Notes:
*  (1) Compiled with MS Visual Studio 2017 Community (v141).
*
* Submitted in partial fulfillment of the requirements of PCC CIS-278.
*************************************************************************
* Change Log:
*   01/17/2018: Initial release. JME
*************************************************************************/
#include <iostream> // cout

// Maximum loop iteration.
unsigned int const maxIterations {10};

int main() {
	std::cout << "integer\tsquare\tcube\n";

	// Calculate and display squares & cubes of integer.
	for (unsigned int i = 0; i <= maxIterations; i++) 
		std::cout << i << '\t' << i * i << '\t' << i * i * i << std::endl;

	return 0;
}

