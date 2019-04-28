#pragma once
#include <iostream>
using namespace std;

#pragma once
#ifndef MYSTRING_H
#define MYSTRING_H

class StringLib {
private:
	char *str;

public:
	StringLib();
	StringLib(int);
	~StringLib();

	int getLength();
	char *toUpperCase();
	char *toLowerCase();

	int findIndex(char *);
	int findIndex(const char *);

	void replace(char *, char *);
	void replace(char *, const char *);
	void replace(const char *, char *);
	void replace(const char *, const char *);

	void swap(StringLib &);

	char* operator + (char*);
	char* operator + (const char*);
	char* operator + (StringLib &);

	void operator = (char*);
	void operator = (const char*);
	void operator = (StringLib &);

	friend ostream& operator << (ostream &, StringLib &);
	friend ostream& operator >> (StringLib &, ostream &);
	friend istream& operator >> (istream &, StringLib &);
	friend istream& operator << (StringLib &, istream &);

	void operator += (char*);
	void operator += (const char*);
	void operator += (StringLib &);

	friend bool operator == (StringLib &, char*);
	friend bool operator == (StringLib &, const char*);
	friend bool operator == (char*, StringLib &);
	friend bool operator == (const char*, StringLib &);
	friend bool operator == (StringLib &, StringLib &);

	friend bool operator != (StringLib &, char*);
	friend bool operator != (StringLib &, const char*);
	friend bool operator != (char*, StringLib &);
	friend bool operator != (const char*, StringLib &);
	friend bool operator != (StringLib &, StringLib &);

	friend bool operator < (StringLib &, char*);
	friend bool operator < (StringLib &, const char*);
	friend bool operator < (StringLib &, StringLib &);
	friend bool operator < (char*, StringLib &);
	friend bool operator < (const char*, StringLib &);

	friend bool operator > (StringLib &, char*);
	friend bool operator > (StringLib &, const char*);
	friend bool operator > (StringLib &, StringLib &);
	friend bool operator > (char*, StringLib &);
	friend bool operator > (const char*, StringLib &);


	friend bool operator <= (StringLib &, char*);
	friend bool operator <= (StringLib &, const char*);
	friend bool operator <= (StringLib &, StringLib &);
	friend bool operator <= (const char*, StringLib &);
	friend bool operator <= (char*, StringLib &);

	friend bool operator >= (StringLib &, char*);
	friend bool operator >= (StringLib &, const char*);
	friend bool operator >= (StringLib &, StringLib &);
	friend bool operator >= (char*, StringLib &);
	friend bool operator >= (const char*, StringLib &);
};

#endif