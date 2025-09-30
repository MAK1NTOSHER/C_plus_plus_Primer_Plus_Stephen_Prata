#pragma once
#ifndef GOLF_H_
#define GOLF_H_

class Golf
{
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;
public:
	Golf() { fullname[0] = '\0'; handicap = 0; }
	Golf(const char* name, int hc);
	~Golf() {}
	int setgolf();
	void change_handicap(int hc);
	void showgolf() const;
};

#endif // !GOLF_H_
