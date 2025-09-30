#pragma once
#ifndef MOVE_H_
#define MOVE_H_

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0); // ������������� x, y � �, b
	void showmove() const; // ���������� �������� �������� x, y
	Move add(const Move& m) const;

	// ��� ������� ��������� x �� m � x ������������� �������,
	// ����� �������� ����� �������� x,
	// ��������� y �� m � y ������������� �������, ����� �������� �����
	// �������� y, ����������� ������������������� ������� �������� x, y
	// � ���������� ���
	void reset(double a = 0, double b = 0); // ���������� x, y � a, b
};

#endif // !MOVE_H_
