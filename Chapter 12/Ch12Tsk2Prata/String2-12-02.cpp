#include <cstring>
#include "string2.h"
#include <cctype>
using std::cin;
using std::cout;

// Инициализация статического члена класса
int String::num_strings = 0;

// Статический метод
int String::HowMany()
{
    return 0;
}

// Методы класса
String::String(const char* s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
 }

String::String()
{
    len = 4;
    str = new char[len + 1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String& st)
{
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}

String::~String()
{
    --num_strings;
    delete[] str;
}

void String::stringlow()
{
    for (int i = 0; i < len; i++)
        str[i] = tolower(str[i]);
}

void String::stringup()
{
    for (int i = 0; i < len; i++)
        str[i] = toupper(str[i]);
}

int String::has(const char ch) const
{
    int cnt = 0;
    for (int i = 0; i < len; i++)
        if (str[i] == ch)
            cnt++;
    return cnt;
}


// Методы перегруженных операций
// Присваивание объекта String объеекту String
String& String::operator=(const String& st)
{
    if (this == &st)
        return *this;
    delete[] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

// Присваивание объекта C-строки объекту String
String& String::operator=(const char* s)
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

// Доступ для четния и записи отдельных символов в неконстантом объекте String
char& String::operator[](int i)
{
    return str[i];
}

// Доступ для четния и записи отдельных символов в константом объекте String
const char& String::operator[](int i) const
{
    return str[i];
}

// Дружественные функции перегруженных операций
bool operator<(const String& st1, const String& st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
    return st2.str < st1.str;
}

bool operator==(const String& st1, const String& st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

// Простой вывод String
ostream& operator<<(ostream& os, const String& st)
{
    os << st.str;
    return os;
}

// Простой ввод String
istream& operator>>(istream& is, String& st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

String operator+(const String& st1, const String& st2)
{
    char* tmp = new char[st1.len + st2.len + 1];
    std::strcat(std::strcpy(tmp, st1.str), st2.str);
    return String(tmp);
}

String operator+(const String& st, const char* s)
{
    return st + String(s);
}

String operator+(const char* s, const String& st)
{
    return String(s) + st;
}
