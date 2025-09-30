#include <iostream>
using std::cout;
#include "stonewt.h"

Stonewt::Stonewt(double lbs)
{
	mode = STN;
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs, Mode form)
{
	mode = form;
	if (mode == STN || mode == IPDS || mode == DPDS)
	{
		stone = stn;
		pds_left = lbs;
		pounds = stn * Lbs_per_stn + lbs;
	}
	else
	{
		cout << "Incorrect 3rd argument to Stonewt() --- ";
		cout << "weight set to 0\n";
		stone = pds_left = pounds = 0;
		mode = STN;
	}
}

Stonewt::Stonewt()
{
	mode = STN;
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{
}

std::ostream& operator<<(std::ostream& os,const  Stonewt& st)
{
	if (st.mode == Stonewt::STN)
		os << st.stone << " stones, " << st.pds_left << " pounds\n";
	else if (st.mode == Stonewt::IPDS)
		os << (int)st.pounds << " pounds\n";
	else if (st.mode == Stonewt::DPDS)
		os << st.pounds << " pounds\n";
	else
		os << "Stonewt object mode is invalid";
	return os;
}