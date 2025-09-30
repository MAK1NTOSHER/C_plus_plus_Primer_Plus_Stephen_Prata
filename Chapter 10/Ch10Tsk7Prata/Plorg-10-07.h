#pragma once
#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
private:
	char name[20];
	int contentment_index;
public:
	Plorg(const char* str = "Plorga", int ind = 50);
	~Plorg() {};
	void CI(int ci);
	void showPlorg() const;
};

#endif // !PLORG_H_
