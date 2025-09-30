#pragma once
#ifndef MOVE_H_
#define MOVE_H_

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0); // усатнавливает x, y в а, b
	void showmove() const; // отображает текущеее значения x, y
	Move add(const Move& m) const;

	// Эта функция добавляет x из m к x вызывающегося объекта,
	// чтобы получить новое значение x,
	// Добавляет y из m к y вызывающегося объекта, чтобы получить новое
	// значение y, прсиваивает инициализированному объекту значения x, y
	// и возвращает его
	void reset(double a = 0, double b = 0); // сбрасывает x, y в a, b
};

#endif // !MOVE_H_
