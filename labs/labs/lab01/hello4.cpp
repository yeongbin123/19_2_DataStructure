// C++ for C Coders & Data Structures
// Lecture note by idebtor@gmail.com
//
// Lab 1:
//  - C and C++ coding using g++
//  - a new line escape character and endl manipulator
//  - `using namespace std;`
//  - Understanding `int main(int argc, char *argv[])`
//  - Using functions and prototype
//  - Compiling multiple source files
//
// The following command line compiles a source files and builds
// an executable a.exe or with a given name. Modify it as you need
// 		g++ hello.cpp
//		./a john paul david
//		g++ hello.cpp -o hello
//		./hello john paul david

#include <iostream>
using namespace std;

// print argc & *argv[]

int main(int argc, char *argv[])
{
 	cout << "argv[0] = " << argv[0] << endl;
	if(argc == 1)
		cout << "Hello World!" << endl;
	else
	{
		cout << "Hello " << argv[1] << endl;
		cout << "Hello " << argv[2] << endl;
		cout << "Hello " << argv[3] << endl;
	}
	return 0;
}