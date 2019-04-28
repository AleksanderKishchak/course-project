#include "StringLib.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <fstream>

using namespace std;

// constructor
StringLib::StringLib() {}

// constructor with parametrs
StringLib::StringLib(int string_length) {
	str = new char[string_length + 1];

	for (int i = 0; i < string_length; i++)
	{
		str[i] = '\0';
	}
}

// destructor
StringLib::~StringLib() {
	delete[] str;
}




int StringLib::getLength() {
	return strlen(str);
}

char *StringLib::toUpperCase() {
	unsigned int length = strlen(str) + 1;
	char *new_string = new char[length];

	for (int i = 0; i < length; i++) {
		if (str[i] > 'a' && str[i] < 'z') {
			new_string[i] = 'A' + (str[i] - 'a');
		}
		else {
			new_string[i] = str[i];
		}
	}

	return new_string;
}

char *StringLib::toLowerCase() {
	unsigned int length = strlen(str) + 1;
	char *new_string = new char[length];

	for (int i = 0; i < length; i++) {
		if (str[i] > 'A' && str[i] < 'Z') {
			new_string[i] = 'a' + (str[i] - 'A');
		}
		else {
			new_string[i] = str[i];
		}
	}

	return new_string;
}



int StringLib::findIndex(const char *substr) {

	int index_of_substr = -1;
	int start_index = 0;
	int str_len = strlen(str);
	int substr_len = strlen(substr);

	if (substr_len > str_len) return -1;

	for (int i = 0; i < str_len; i++) {
		if (str[i] == substr[0]) {
			if (str_len - i < substr_len) return -1;

			index_of_substr = i;

			for (int j = 0; j < substr_len; j++) {
				if (str[i + j] == substr[j]) {
					continue;
				}
				else {
					index_of_substr = -1;
					break;
				}
			}

			if (index_of_substr != -1) {
				return index_of_substr;
			}
		}
	}

	return index_of_substr;
}

int StringLib::findIndex(char *substr) {

	int index_of_substr = -1;
	int start_index = 0;
	int str_len = strlen(str);
	int substr_len = strlen(substr);

	if (substr_len > str_len) return -1;

	for (int i = 0; i < str_len; i++) {
		if (str[i] == substr[0]) {
			if (str_len - i < substr_len) return -1;

			index_of_substr = i;

			for (int j = 0; j < substr_len; j++) {
				if (str[i + j] == substr[j]) {
					continue;
				}
				else {
					index_of_substr = -1;
					break;
				}
			}

			if (index_of_substr != -1) {
				return index_of_substr;
			}
		}
	}

	return index_of_substr;
}





void StringLib::replace(char *substr, char *replacement) {
	int index = findIndex(substr);

	if (index != -1) {
		int substr_len = strlen(substr);
		int str_len = strlen(str);
		int replacement_len = strlen(replacement);
		int rest_str_len = str_len - (index + substr_len) + 1;
		char *rest_string = new char[rest_str_len];
		char *string_before_index = new char[index];

		for (int i = index + substr_len, j = 0; i < str_len; i++, j++) {
			rest_string[j] = str[i];
		}

		rest_string[rest_str_len - 1] = '\0';

		for (int i = 0; i < index; i++) {
			string_before_index[i] = str[i];
		}
		string_before_index[index] = '\0';

		delete[]str;
		str = new char[str_len - substr_len + replacement_len + 1];

		for (int i = 0; i < index; i++) {
			str[i] = string_before_index[i];
		}

		for (int i = 0; i < replacement_len; i++) {
			str[index + i] = replacement[i];
		}

		for (int i = 0; i < rest_str_len; i++) {
			str[index + replacement_len + i] = rest_string[i];
		}

		delete[] rest_string;
		delete[] string_before_index;
	}
}

void StringLib::replace(char *substr, const char *replacement) {
	int index = findIndex(substr);

	if (index != -1) {
		int substr_len = strlen(substr);
		int str_len = strlen(str);
		int replacement_len = strlen(replacement);
		int rest_str_len = str_len - (index + substr_len) + 1;
		char *rest_string = new char[rest_str_len];
		char *string_before_index = new char[index];

		for (int i = index + substr_len, j = 0; i < str_len; i++, j++) {
			rest_string[j] = str[i];
		}

		rest_string[rest_str_len - 1] = '\0';

		for (int i = 0; i < index; i++) {
			string_before_index[i] = str[i];
		}
		string_before_index[index] = '\0';

		delete[]str;
		str = new char[str_len - substr_len + replacement_len + 1];

		for (int i = 0; i < index; i++) {
			str[i] = string_before_index[i];
		}

		for (int i = 0; i < replacement_len; i++) {
			str[index + i] = replacement[i];
		}

		for (int i = 0; i < rest_str_len; i++) {
			str[index + replacement_len + i] = rest_string[i];
		}

		delete[] rest_string;
		delete[] string_before_index;
	}
}

void StringLib::replace(const char *substr, char *replacement) {
	int index = findIndex(substr);

	if (index != -1) {
		int substr_len = strlen(substr);
		int str_len = strlen(str);
		int replacement_len = strlen(replacement);
		int rest_str_len = str_len - (index + substr_len) + 1;
		char *rest_string = new char[rest_str_len];
		char *string_before_index = new char[index];

		for (int i = index + substr_len, j = 0; i < str_len; i++, j++) {
			rest_string[j] = str[i];
		}

		rest_string[rest_str_len - 1] = '\0';

		for (int i = 0; i < index; i++) {
			string_before_index[i] = str[i];
		}
		string_before_index[index] = '\0';

		delete[]str;
		str = new char[str_len - substr_len + replacement_len + 1];

		for (int i = 0; i < index; i++) {
			str[i] = string_before_index[i];
		}

		for (int i = 0; i < replacement_len; i++) {
			str[index + i] = replacement[i];
		}

		for (int i = 0; i < rest_str_len; i++) {
			str[index + replacement_len + i] = rest_string[i];
		}

		delete[] rest_string;
		delete[] string_before_index;
	}
}

void StringLib::replace(const char *substr, const char *replacement) {
	int index = findIndex(substr);

	if (index != -1) {
		int substr_len = strlen(substr);
		int str_len = strlen(str);
		int replacement_len = strlen(replacement);
		int rest_str_len = str_len - (index + substr_len) + 1;
		char *rest_string = new char[rest_str_len];
		char *string_before_index = new char[index];

		for (int i = index + substr_len, j = 0; i < str_len; i++, j++) {
			rest_string[j] = str[i];
		}

		rest_string[rest_str_len - 1] = '\0';

		for (int i = 0; i < index; i++) {
			string_before_index[i] = str[i];
		}
		string_before_index[index] = '\0';

		delete[]str;
		str = new char[str_len - substr_len + replacement_len + 1];

		for (int i = 0; i < index; i++) {
			str[i] = string_before_index[i];
		}

		for (int i = 0; i < replacement_len; i++) {
			str[index + i] = replacement[i];
		}

		for (int i = 0; i < rest_str_len; i++) {
			str[index + replacement_len + i] = rest_string[i];
		}

		delete[] rest_string;
		delete[] string_before_index;
	}
}





void StringLib::swap(StringLib &instance) {
	int str_len = strlen(str);
	int inst_len = instance.getLength();
	char *temp = new char[inst_len + 1];

	for (int i = 0; i < inst_len; i++) {
		temp[i] = instance.str[i];
	}
	temp[inst_len] = '\0';

	delete[]instance.str;
	instance.str = new char[str_len + 1];

	for (int i = 0; i < str_len; i++) {
		instance.str[i] = str[i];
	}
	instance.str[str_len] = '\0';

	delete[] str;
	str = new char[inst_len + 1];

	for (int i = 0; i < inst_len; i++) {
		str[i] = temp[i];
	}
	str[inst_len] = '\0';

	delete[] temp;
}


// OVERLOADS

// перегрузка +
char * StringLib::operator + (char* added_string) {
	int str_len = strlen(str);
	int added_string_length = strlen(added_string);
	int sum_length = str_len + added_string_length;
	char* tempStr = new char[sum_length + 1];

	for (int i = 0; i < str_len; i++) {
		tempStr[i] = str[i];
	}
	for (int i = 0; i < added_string_length; i++) {
		tempStr[i + str_len] = added_string[i];
	}

	tempStr[sum_length] = '\0';
	return tempStr;
}

char * StringLib::operator + (const char* added_string) {
	int str_len = strlen(str);
	int added_string_length = strlen(added_string);
	int sum_length = str_len + added_string_length;
	char* tempStr = new char[sum_length + 1];

	for (int i = 0; i < str_len; i++) {
		tempStr[i] = str[i];
	}
	for (int i = 0; i < added_string_length; i++) {
		tempStr[i + str_len] = added_string[i];
	}

	tempStr[sum_length] = '\0';
	return tempStr;
}

char * StringLib::operator + (StringLib &instance) {
	int str_len = strlen(str);
	int added_string_length = strlen(instance.str);
	int sum_length = str_len + added_string_length;
	char* tempStr = new char[sum_length + 1];

	for (int i = 0; i < str_len; i++) {
		tempStr[i] = str[i];
	}
	for (int i = 0; i < added_string_length; i++) {
		tempStr[i + str_len] = instance.str[i];
	}

	tempStr[sum_length] = '\0';
	return tempStr;
}


// overload =
void StringLib::operator = (char * new_str)
{
	delete[] str;
	int length = strlen(new_str);
	str = new char[length + 1];
	for (int i = 0; i < length; i++) {
		str[i] = new_str[i];
	}
	str[length] = '\0';
}

void StringLib::operator = (const char * new_str)
{
	delete[] str;
	int length = strlen(new_str);
	str = new char[length + 1];
	for (int i = 0; i < length; i++) {
		str[i] = new_str[i];
	}
	str[length] = '\0';
}

void StringLib::operator = (StringLib &instance)
{
	delete[] str;
	int length = strlen(instance.str);
	str = new char[length + 1];
	for (int i = 0; i < length; i++) {
		str[i] = instance.str[i];
	}
	str[length] = '\0';
}


//  перегрузка <<
ostream& operator << (ostream &s, StringLib &instance)
{
	s << instance.str;
	return s;
}

ostream& operator >> (StringLib &instance, ostream &s)
{
	s << instance.str;
	return s;
}

//  перегрузка >>
istream& operator >> (istream &s, StringLib &instance)
{
	string temp_string;
	getline(s, temp_string);

	int temp_str_length = temp_string.length();
	delete[]instance.str;
	instance.str = new char[temp_str_length + 1];

	for (int i = 0; i < temp_str_length; i++) {
		instance.str[i] = temp_string[i];
	}
	instance.str[temp_str_length] = '\0';

	return s;
}

istream& operator << (StringLib &instance, istream &s)
{
	string temp_string;
	getline(s, temp_string);

	int temp_str_length = temp_string.length();
	delete[]instance.str;
	instance.str = new char[temp_str_length + 1];

	for (int i = 0; i < temp_str_length; i++) {
		instance.str[i] = temp_string[i];
	}
	instance.str[temp_str_length] = '\0';

	return s;
}


// перегрузка +=
void StringLib::operator += (char* str2)
{
	const unsigned int first_len = strlen(str);
	const unsigned int second_len = strlen(str2);
	const unsigned int sum_length = first_len + second_len;
	char *temp_str = new char[sum_length + 1];

	for (int i = 0; i < first_len; i++) {
		temp_str[i] = str[i];
	}
	for (int i = 0; i < second_len; i++) {
		temp_str[first_len + i] = str2[i];
	}
	temp_str[sum_length] = '\0';

	delete[]str;
	str = new char[sum_length + 1];

	strcpy(str, temp_str);

	delete[] temp_str;
}

void StringLib::operator += (const char *str2)
{
	const unsigned int first_len = strlen(str);
	const unsigned int second_len = strlen(str2);
	const unsigned int sum_length = first_len + second_len;
	char *temp_str = new char[sum_length + 1];

	for (int i = 0; i < first_len; i++) {
		temp_str[i] = str[i];
	}
	for (int i = 0; i < second_len; i++) {
		temp_str[first_len + i] = str2[i];
	}
	temp_str[sum_length] = '\0';

	delete[]str;
	str = new char[sum_length + 1];

	strcpy(str, temp_str);

	delete[] temp_str;
}

void StringLib::operator += (StringLib &instance)
{
	const unsigned int first_len = strlen(str);
	const unsigned int second_len = strlen(instance.str);
	const unsigned int sum_length = first_len + second_len;
	char *temp_str = new char[sum_length + 1];

	for (int i = 0; i < first_len; i++) {
		temp_str[i] = str[i];
	}
	for (int i = 0; i < second_len; i++) {
		temp_str[first_len + i] = instance.str[i];
	}
	temp_str[sum_length] = '\0';


	delete[]str;
	str = new char[sum_length + 1];

	strcpy(str, temp_str);

	delete[] temp_str;
}




// перегрузка ==
bool operator == (StringLib &self, char* str2)
{
	int first_length = strlen(self.str);
	int second_length = strlen(str2);

	if (first_length != second_length) return false;

	for (int i = 0; i < first_length; i++) {
		if (self.str[i] != str2[i]) {
			return false;
		}
	}
	return true;
}

bool operator == (StringLib &self, const char* str2)
{
	int first_length = strlen(self.str);
	int second_length = strlen(str2);

	if (first_length != second_length) return false;

	for (int i = 0; i < first_length; i++) {
		if (self.str[i] != str2[i]) {
			return false;
		}
	}
	return true;
}

bool operator == (char* comparing_string, StringLib &instance) {
	return (instance == comparing_string);
}

bool operator == (const char* comparing_string, StringLib &instance) {
	return (instance == comparing_string);
}

bool operator == (StringLib &self, StringLib &instance)
{
	int first_length = strlen(self.str);
	int second_length = strlen(instance.str);

	if (first_length != second_length) return false;

	for (int i = 0; i < first_length; i++) {
		if (self.str[i] != instance.str[i]) {
			return false;
		}
	}
	return true;
}




// перегрузка !=
bool operator != (StringLib &self, char* str2)
{
	return !(self == str2);
}

bool operator != (StringLib &self, const char* str2)
{
	return !(self == str2);
}

bool operator != (char* str2, StringLib &self)
{
	return !(self == str2);
}

bool operator != (const char* str2, StringLib &self)
{
	return !(self == str2);
}

bool operator != (StringLib &self, StringLib &instance)
{
	return !(self == instance);
}




// перегрузка <
bool operator < (StringLib &instance, char* str2)
{
	int first_length = strlen(instance.str);
	int second_length = strlen(str2);
	int lesser_length = first_length < second_length ? first_length : second_length;

	for (int i = 0; i < lesser_length; i++) {
		if (instance.str[i] == str2[i]) continue;

		if (instance.str[i] < str2[i]) {
			return true;
		}
		else {
			return false;
		}
	}

	if (first_length == second_length) return false;

	return first_length < second_length;
}

bool operator < (StringLib &instance, const char* str2)
{
	int first_length = strlen(instance.str);
	int second_length = strlen(str2);
	int lesser_length = first_length < second_length ? first_length : second_length;

	for (int i = 0; i < lesser_length; i++) {
		if (instance.str[i] == str2[i]) continue;

		if (instance.str[i] < str2[i]) {
			return true;
		}
		else {
			return false;
		}
	}
	if (first_length == second_length) return false;

	return first_length < second_length;
}

bool operator < (StringLib &self, StringLib &instance)
{
	int first_length = strlen(self.str);
	int second_length = strlen(instance.str);
	int lesser_length = first_length < second_length ? first_length : second_length;

	for (int i = 0; i < lesser_length; i++) {
		if (self.str[i] == instance.str[i]) continue;

		if (self.str[i] < instance.str[i]) {
			return true;
		}
		else {
			return false;
		}
	}
	if (first_length == second_length) return false;

	return first_length < second_length;
}

bool operator < (char* str2, StringLib &instance) {
	return (instance > str2);
}

bool operator < (const char* str2, StringLib &instance) {
	return (instance > str2);
}




// перегрузка >
bool operator > (StringLib &instance, char* str2)
{
	return (!(instance == str2) && !(instance < str2));
}

bool operator > (StringLib &instance, const char* str2)
{
	return (!(instance == str2) && !(instance < str2));
}

bool operator > (StringLib &self, StringLib &instance)
{
	return (!(instance == self) && !(self < instance));
}

bool operator > (char* str2, StringLib &instance)
{
	return (instance < str2);
}

bool operator > (const char* str2, StringLib &instance)
{
	return (instance < str2);
}




// перегрузка <=
bool operator <= (StringLib &instance, char* str2)
{
	if (instance == str2) return true;

	return (instance < str2);
}

bool operator <= (StringLib &instance, const char* str2)
{
	if (instance == str2) return true;

	return (instance < str2);
}

bool operator <= (StringLib &self, StringLib &instance)
{
	if (instance == self) return true;

	return (self < instance);
}

bool operator <= (const char* str2, StringLib &instance) {
	return (instance >= str2);
}

bool operator <= (char* str2, StringLib &instance) {
	return (instance >= str2);
}




// перегрузка >=
bool operator >= (StringLib &instance, char* str2)
{
	if (instance == str2) return true;

	return (instance > str2);
}

bool operator >= (StringLib &instance, const char* str2)
{
	if (instance == str2) return true;

	return (instance > str2);
}

bool operator >= (StringLib &self, StringLib &instance)
{
	if (instance == self.str) return true;

	return (self > instance);
}

bool operator >= (char* str2, StringLib &instance) {
	return (instance <= str2);
}

bool operator >= (const char* str2, StringLib &instance) {
	return (instance <= str2);
}
