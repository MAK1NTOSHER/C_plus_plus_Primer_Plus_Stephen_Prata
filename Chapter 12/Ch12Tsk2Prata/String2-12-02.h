#ifndef STRING2_H
#define STRING2_H
#include <iostream>
#include <string>
using std::ostream;
using std::istream;

#pragma warning(disable:4996)

class String
{
private:
	char* str;							// указатель на строку
	int len;							// длина строки
	static int num_strings;				// количесвто объектов
	static const int CINLIM = 80;		// предел ввода для cin
public:
	// Конструкторы и другие методы
	String(const char* s);				// конструктор
	String();							// конструктор по умолчанию
	String(const String&);				// конструктор копирования
	~String();							// деструктор
	int length() const { return len; }
	void stringlow();
	void stringup();
	int has(const char) const;

	// Методы перегруженных операций
	String& operator=(const String&);
	String& operator=(const char*);
	char& operator[](int i); // неконстантная версия
	const char& operator [](int i) const; // константная версия

	// Дружественные функции перегруженных операций
	friend bool operator<(const String& st1, const String& st2);
	friend bool operator>(const String& st1, const String& st2);
	friend bool operator==(const String& st1, const String& st2);
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, String& st);
	friend String operator+(const String& st1, const String& st2);
	friend String operator+(const String& st, const char* s);
	friend String operator+(const char* s, const String& st);

	// Статическая функция
	static int HowMany();
};
#endif STRING2_H