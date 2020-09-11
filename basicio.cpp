#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;
int main() {
	//Declare allowed variables
	int int_in;
	char char_in;
	double double_in;
	string string_in;
	
	
	//Single integer int_in
	cout << "Enter one integer: ";
	cin >> int_in;
	cout << "You entered the value: " << int_in << endl << endl;
	cin.ignore(INT_MAX, '\n');
	
	//Multiple integer int_in
	cout << "Enter four integers: ";
	cin >> int_in;
	cout << "You entered the following numbers: " << int_in << " ";
	cin >> int_in;
	cout << int_in << " ";
	cin >> int_in;
	cout << int_in << " ";
	cin >> int_in;
	cout << int_in << endl << endl;
	cin.ignore(INT_MAX, '\n');
	
	//Single integer int_in Real number double_in
	cout << "Enter one integer and one real number: ";
	cin >> int_in;
	cin >> double_in;
	cout << "The real is: " << setw(11) << setprecision(3) << fixed << double_in << endl;
	cout << "The integer is: " << setw(8) << int_in << endl << endl;
	cin.ignore(INT_MAX, '\n');
	
	//Single Real number  double_in Integer number int_in
	cout << "Enter one real and one integer number: ";
	cin >> double_in;
	cin >> int_in;
	cout << "The real is: " << setw(11) << setprecision(3) << fixed << setfill('.') << double_in << endl;
	cout << "The integer is: " << setw(8) << int_in << endl << endl;
	cin.ignore(INT_MAX, '\n');
	
	//Single char char_in
	cout << "Enter a character: ";
	cin >> char_in;
	cout << "You entered : " << char_in << endl << endl;
	cin.ignore(INT_MAX, '\n');
	
	//Single word string_in
	cout << "Enter a word: ";
	cin >> string_in;
	cout << "The word \'" << string_in << "\' has " << string_in.length() << " character(s)." << endl << endl;
	cin.ignore(INT_MAX, '\n');
	
	//Single integer int_in and a word string_in
	cout << "Enter an integer and a word: ";
	cin >> int_in;
	cin >> string_in;
	cout << "You entered \'" << int_in << "\' and \'" << string_in << "\'." << endl << endl;
	cin.ignore(INT_MAX, '\n');
	
	//Single Char and a word
	cout << "Enter a character and a word: ";
	cin >> char_in;
	cin >> string_in;
	cout << "You entered the string \"" << string_in << "\" and the character \'" << char_in << "\'." << endl << endl;
	cin.ignore(INT_MAX, '\n');
	
	//Word and real number
	cout << "Enter a word and a real number: ";
	cin >> string_in;
	cin >> double_in;
	cout << "You entered \"" << string_in << "\" and \"" << fixed << setprecision(3) << double_in << "\"." << endl << endl;
	cin.ignore(INT_MAX, '\n');
	
	//Text-line
	string_in.clear();
	cin.clear();
	cout << "Enter a text-line: ";
	cin.ignore();
	getline(cin, string_in);
	cout << "You entered: \"" << string_in << "\"" << endl << endl;
	
	//Second text-line
	cin.clear();
	cout << "Enter a second line of text: ";
	getline(cin, string_in);
	cout << "You entered: \'" << string_in << "\"" << endl << endl;
	
	//Three words
	cout << "Enter three words: ";
	cin >> string_in;
	cout << "You entered: \'" << string_in;
	cin >> string_in;
	cout << " " << string_in;
	cin >> string_in;
	cout << " " << string_in << "\'" << endl;
	cin.ignore(INT_MAX, '\n');
	
	
	
	
}