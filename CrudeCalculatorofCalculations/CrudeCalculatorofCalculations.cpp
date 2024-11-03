// What are the wanted outcomes of the app?
// 1) Call a dozen unique functions that do some thing, that call eachother.
// 2) Make it complete a task in an overcomplicated way (preferrably, using std::cin to take user inputs for numbers to do multiplication, divison, addition etc)

// Program Brainstorming
// -- A math calculator? Remember, 2 + 3 * 9 would be = 29! But probably very simple math...
// -- Mini-Choice app? (A small set of choices lead to a unique outcome)
// -- Idk

// This is v1.0! Check on Github for any recent releases: https://github.com/SudoNotNoted2007/CrudeCalculatorofCalculations/releases

/* #NOTES FROM ROLLING ROCK!!
1) It seems the int returntype in additionOfValues and subtractionOfValues should be replaced with void, otherwise it may not compile
2) parantheses may be needed around functions before brackets
3) Void returntype may need to be used, the return of 0; can corrupt the stack. (additionOfValues, subtractionOfValues etc)
4) A note from me myself and I, Port code over to Visual Studio 2022 for a better experience
*/
#include <iostream>
#include <Windows.h>   //Do not deprecate, sets window title


int typeofmathinterpreter{};		//for the std::cin output within typeofmath

int closeprogram{};

//addition section
int additionOfValuesInterpreter1{};	// The first addition value.

int additionOfValuesInterpeter2{};	//Not to be confused with Interpeter 1 of addition.

int additionOfValues()
{
	std::cout << "Which number would you wish to add first? Please type it in: ";

	std::cin >> additionOfValuesInterpreter1;
	std::cout << " and ";
	std::cin >> additionOfValuesInterpeter2;
	std::cout << additionOfValuesInterpreter1 + additionOfValuesInterpeter2 << " is the result! \n";
	std::cout << "Please reopen the program again if you wish to calculate more. \n";
	std::cout << "Press any key and enter to close the program. (Preferrably, a number)";
	std::cin >> closeprogram;

	return 0;
};

int subtractionOfValuesInterpreterOne{};

int subtractionOfValuesInterpreterTwo{};

int subtractionOfValues(){
	std::cout << "Which number would you wish to first subrtact? Please type it in: ";

	std::cin >> subtractionOfValuesInterpreterOne;
	std::cout << " and  \n";
	std::cin >> subtractionOfValuesInterpreterTwo;

	std::cout << (subtractionOfValuesInterpreterOne-subtractionOfValuesInterpreterTwo) << " is the result! \n";
	std::cout << "Please reopen the program again if you wish to calculate more. \n";
	std::cout << "Press any key and enter to close the program. (Preferrably, a number)";
	std::cin >> closeprogram;
	
	return 0;

};

// Deprecate the commented out code and move it into main. Or just deprecate this garbage later.

/* if typeofmathinterpreter == 1{
	 additionOfValues
} */

int main() {			//Math instructions will be handled here.
	SetConsoleTitle(L"The Crude Calculator of Calculations"); //sets window title
	std::cout << "Created by Sudo_NotNoted2007, newbie of C++. \n" << "Date of creation: 11/1/2024 7:24PM CST. This program is open-source, too. If you like fiddling. \n";

	std::cout << "Build 211H24. \n";

	std::cout << "Which type of math do you wish for? \n";

	std::cout << "\n";
	std::cout << "PLEASE PUT IN A VALID VALUE, PROGRAM WILL CRASH IF ANY INVALID VALUE IS INSERTED. \n";

	std::cout << "1 for addition \n" << "2 for subtraction \n" << "3 for multiplication \n" << "This program does not support division or complex equations yet. I apologize. \n";


	std::cin >> typeofmathinterpreter;

	std::cout << "You have chosen (" << typeofmathinterpreter << ".) \n";

	if (typeofmathinterpreter == 1) {
		additionOfValues();
	}
	if (typeofmathinterpreter == 2) {
		subtractionOfValues();
	}
}


// Is this program handled well? A checklist.
/* 1) Are there no syntax errors? (semi-colons are after statements for example. <<operator and >>operator are not confused)
	2) Is it readable? Is this not clunked together?
	 3) Are comments HELPFUL? Do they explain what a function DOES/IS USED FOR?
	  4) Is it optimized as best as it could be? (Prefer \n over std::endl unless buffer needs to be wiped.)
		5) Has every line been double-checked for any compile errors? Hopefully you did.
		 6) Has this been debugged several times to insure no errors?

	Now with all of that, if this checklist requirements are met, it's good for compiling :D! -- Not*/;