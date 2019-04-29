#include <iostream>
#include "StringLib.h"
#include <string>

int main() {
	bool onceMore = true;
	cout << "\tHi! It's a small demo of my course project\n";
	StringLib str1, str2, str3, trash;

	while (onceMore) {
		int number_of_operations = -1;
		system("cls");

		cout << "\tEnter number of an operation to test..\n";
		cout << "\t1. getLength\n";
		cout << "\t2. toLowerCase\n";
		cout << "\t3. toUpperCase\n";
		cout << "\t4. findIndex\n";
		cout << "\t5. replace\n";
		cout << "\t6. swap\n";
		cout << "\t7. overload +\n";
		cout << "\t8. overload +=\n";
		cout << "\t9. overload =\n";
		cout << "\t10. overload cout <<\n";
		cout << "\t11. overload >> cout\n";
		cout << "\t12. overload cin >>\n";
		cout << "\t13. overload << cin\n";
		cout << "\t14. overload ==\n";
		cout << "\t15. overload !=\n";
		cout << "\t16. overload >\n";
		cout << "\t17. overload >=\n";
		cout << "\t18. overload <\n";
		cout << "\t19. overload <=\n";
		cout << "\tEnter any other number to exit\n\n";
		cin >> number_of_operations;

		system("cls");

		cout << "\nEnter string\n";

		switch (number_of_operations) {
			case 1:
				cin >> trash;
				cin >> str1;
				cout << str1.getLength() << endl;
				break;
			case 2:
				cin >> trash;
				cin >> str1;
				cout << str1.toLowerCase() << endl;
				break;
			case 3:
				cin >> trash;

				cin >> str1;
				cout << str1.toUpperCase() << endl;
				break;
			case 4:
				cin >> trash;

				cin >> str1;
				cout << "Enter substring\n";
				cin >> str2;
				cout << str1.findIndex(str2) << endl;
				break;
			case 5:
				cin >> trash;

				cin >> str1;
				cout << "Enter substring\n";
				cin >> str2;
				cout << "Enter the string to replace\n";
				cin >> str3;
				str1.replace(str2, str3);
				cout << str1 << endl;
				break;
			case 6:
				cin >> trash;

				cin >> str1;
				cout << "Enter second string\n";
				cin >> str2;
				str1.swap(str2);
				cout << "str1: " << str1 << endl;
				cout << "str2: " << str2 << endl;
				break;
			case 7:
				cin >> trash;

				cin >> str1;
				cout << "Enter second string\n";
				cin >> str2;
				cout << str1 + str2 << endl;
				break;
			case 8:
				cin >> trash;

				cin >> str1;
				cout << "Enter second string\n";
				cin >> str2;
				str1 += str2;
				cout << str1 << endl;
				break;
			case 9:
				cin >> trash;

				cin >> str1;
				cout << "Enter second string\n";
				cin >> str2;
				str1 = str2;
				cout << str1 << endl;
				break;
			case 10:
				cin >> trash;

				cin >> str1;
				cout << str1 << endl;
				break;
			case 11:
				cin >> trash;

				cin >> str1;
				str1 >> cout << endl;
				break;
			case 12:
				cin >> trash;

				cin >> str1;
				cout << str1 << endl;
				break;
			case 13:
				cin >> trash;

				str1 << cin;
				cout << str1 << endl;
				break;
			case 14:
				cin >> trash;

				cin >> str1;
				cout << "Enter second string\n";
				cin >> str2;
				cout << (str1 == str2) << endl;
			case 15:
				cin >> trash;

				cin >> str1;
				cout << "Enter second string\n";
				cin >> str2;
				cout << (str1 != str2) << endl;
			case 16:
				cin >> trash;

				cin >> str1;
				cout << "Enter second string\n";
				cin >> str2;
				cout << (str1 > str2) << endl;
			case 17:
				cin >> trash;

				cin >> str1;
				cout << "Enter second string\n";
				cin >> str2;
				cout << (str1 >= str2) << endl;
			case 18:
				cin >> trash;

				cin >> str1;
				cout << "Enter second string\n";
				cin >> str2;
				cout << (str1 < str2) << endl;
			case 19:
				cin >> trash;

				cin >> str1;
				cout << "Enter second string\n";
				cin >> str2;
				cout << (str1 <= str2) << endl;
			default:
				cout << "wrong number\n";
		}

		cout << "\n once more? <Y/n>\n";
		//getchar();
		char answer = getchar();
		onceMore = answer == 'y'
			? true
			: false;
	}
}