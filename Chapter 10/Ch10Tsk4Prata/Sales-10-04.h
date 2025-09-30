#pragma once
namespace SALES
{
	class Sales
	{
	private:
		static const int QUATERS = 4;
		double sales[QUATERS];
		double average;
		double min;
		double max;
	public:
		Sales();
		Sales(const double ar[], int n);
		~Sales() {};
		void setSales();
		void showSales() const;
	};
}