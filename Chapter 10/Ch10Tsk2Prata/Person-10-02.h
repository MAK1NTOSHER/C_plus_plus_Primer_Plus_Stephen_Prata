#pragma once
#ifndef PERSON_H_
#define PERSON_H_
#include <string>

class Person
{
private:
	static const int LIMIT = 25;
	std::string lname; // фамилия
	char fname[LIMIT]; // имя
public:
	Person() { lname = ""; fname[0] = '\0'; }
	Person(const std::string& ln, const char* fn = "Heyyou");
	~Person() {}
	void Show() const; // формат: имя фамилия
	void FormalShow() const; // формат: фамилия, имя
};

#endif // !PERSON_H_

