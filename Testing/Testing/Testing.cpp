/*#include <iostream>
#include <string>
#include "StringLib.h"
using namespace std;

int main()
{
	StringLib str, str2;

	// Testing of >> and << operators
	cout << "overload: cin >> string\nEnter string\n";
	cin >> str;
	cout << "\noverload: cout << string\nYour string is: " << str << endl;
	cout << "\noverload: string << cin\nEnter string\n";
	str << cin;
	cout << "\noverload: string >> cout\nYour string is: ";
	str >> cout << endl;


	// Testing of += and + and =
	char *temp_str = new char[100];

	cout << "\nEnter temp string to be used for\n\t1) overload +\n\t2) overload =\n\t3) overload +=\n";
	cin.getline(temp_str, 99);
	cout << "\nOverload +\n";
	string plus = (str + temp_str);
	cout << "result: " << plus << endl;
	cout << "Your string still is: " << str << endl;

	cout << "\nOverload =\n";
	str = temp_str;
	cout << "Your string is: " << str << endl;

	cout << "\nOverload +=\n";
	str += temp_str;
	cout << "Your string is: " << str << endl;

	// Testing comparison operations
	cout << "Enter second string to be used for comparison operations\nEnter string\n";
	cin >> str2;
	cout << "strings are: " << str << "     " << str2 << endl;
	bool is_equal = str == str2;
	cout << "Overload ==\nis Equal?: " << is_equal << endl;

	bool is_not_equal = str != str2;
	cout << "Overload !=\nis not Equal?: " << is_not_equal << endl;

	cout << "Enter 2 strings to test <, >, <=, >= operations\n";
	cin >> str;
	cin >> str2;

	cout << "str1 < str2? : " << (str < str2) << endl;
	cout << "str1 <= str2? : " << (str <= str2) << endl;
	cout << "str1 > str2? : " << (str > str2) << endl;
	cout << "str1 >= str2? : " << (str >= str2) << endl;



	// Test class methods

	// Testing of getLength method
	cout << "Enter 2 strings to test getLength methods\n";
	cin >> str >> str2;
	cout << "\nlength of first string: " << str.getLength() << endl;
	cout << "length of second string: " << str2.getLength() << endl << endl;


	// Testing of toLowerCase and toUpperCase methods
	cout << "Enter 2 strings to test change case methods\n";
	cin >> str >> str2;
	cout << "\nfirst str toLowerCase: " << str.toLowerCase() << endl;
	cout << "second str toUpperCase: " << str2.toUpperCase() << endl << endl;
	

	// Testing of findIndex method
	cout << "Enter 2 strings to test findIndex method\n";
	cin >> str >> str2;
	cout << "\nindex of the second string in the first one: " << str.findIndex(str2) << endl << endl;
	

	// Testing of replace method
	cout << "Enter 2 strings to test replace method\n";
	cin >> str >> str2;
	str.replace(str2, "cats");
	cout << "\nstr1.replace(str2, 'cats'): " << str << endl << endl;


	// Testing swap method
	cout << "Enter 2 strings to test swap method\n";
	cin >> str >> str2;
	str.swap(str2);
	cout << "first str: " << str << endl << "second str: " << str2 << endl << endl;
	system("pause");
}*/