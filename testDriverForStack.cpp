#include <iostream>
#include <fstream>
#include <string>
#include "stackADTHeader.h"
#include "stackADTImplementation.cpp" 

using namespace std;

int main() {
	Stack<char> stack; // declare class variable that accepts characters.
	ifstream inFile;
	ofstream outFile;
	string inputFileName, outputFileName, testName, command;
	char character;
	bool quit = false;
	cout << "Please input file name: ";
	cin >> inputFileName;
	inFile.open(inputFileName);
	while (!inFile) {
		cout << "ERROR, file not found!, enter again: ";
		cin.ignore();
		getline(cin, inputFileName);
		inFile.open(inputFileName);
	}
	cout << "\nPlease enter name of output file: ";
	cin >> outputFileName;
	outFile.open(outputFileName);
	cout << "\nPlease enter name of output label: ";
	cin.ignore();
	getline(cin, testName);
	outFile << testName << endl;
	while (!quit) {
		inFile >> command;
		if (command == "Push") {
			inFile >> character;
			cout << "Push " << character << endl;
			stack.Push(character);
		}
		else if (command == "Pop") {
			outFile << stack.Pop() << endl;
		}
		else if (command == "isEmpty") {
			bool determiningIfEmpty = stack.isEmpty();
			if (determiningIfEmpty == true) {
				cout << "Stack is empty!" << endl;
				outFile << "Stack is empty!" << endl;
			}
			else {
				cout << "Stack is not empty!" << endl;
				outFile << "Stack is not empty!" << endl;
			}
		}
		else if (command == "Quit") {
			inFile.close();
			outFile << "END OF TEST" << endl;
			outFile.close();
			cout << "File has been successfully closed!" << endl;
			quit = true;
		}
		
	}
	return 0;
}
