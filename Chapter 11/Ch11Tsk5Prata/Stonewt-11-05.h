#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt
{
private:
	enum Mode {STN, IPDS, DPDS}; // STN - стоуны, IPDS - целочисленное значение в фунтах, DPDS - значение в фунтах с плавающей точкой
	enum {Lbs_per_stn = 14};
	int stone;
	double pds_left;
	double pounds;
	Mode mode;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs, Mode form = STN);
	Stonewt();
	~Stonewt();
	void setStnMode() { mode = STN; }
	void setIntMode() { mode = IPDS; }
	void setDoubleMode() { mode = DPDS; }
	Stonewt operator*(double n) const
		{ return Stonewt(pounds * n); }
	friend std::ostream& operator<<(std::ostream & os, const Stonewt& st);
	friend Stonewt operator+(const Stonewt& st1, const Stonewt& st2)
		{ return Stonewt(st1.pounds + st2.pounds); }
	friend Stonewt operator-(const Stonewt& st1, const Stonewt& st2)
		{ return Stonewt(st1.pounds - st2.pounds); }
	friend Stonewt operator*(double n, const Stonewt& st)
		{ return Stonewt(st.pounds * n); }
};
#endif
