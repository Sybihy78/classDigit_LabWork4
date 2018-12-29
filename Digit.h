#pragma once


class Digit
{
	int digit = 0;
	static int counter;
public:
	Digit();
	Digit(int);
	Digit(double);
	Digit(const Digit&);
	Digit(Digit&& dig);
	~Digit();
	int getDigit() const;
	void setDigit(const int);
	static int getCounter();

	Digit operator-();
	Digit operator+(const Digit&);
	Digit operator+(const int&);
	Digit operator-(const Digit&);
	Digit operator-(const int&);
	Digit operator*(const Digit&);
	Digit operator*(const int&);
	Digit operator/(const Digit&);
	Digit operator/(const int&);
	Digit operator%(const Digit&);
	Digit operator%(const int&);
	bool operator>(const Digit&);
	bool operator<(const Digit&);
	bool operator==(const Digit&);
	bool operator!=(const Digit&);
	bool operator>=(const Digit&);
	bool operator<=(const Digit&);
	Digit& operator++();
	Digit operator++(const int);
	Digit& operator--();
	Digit operator--(const int);
	Digit& operator=(const Digit&);
	Digit& operator=(Digit&& move);
	Digit& operator+=(const Digit&); 
	Digit& operator+=(const int&);
	Digit& operator-=(const Digit&);
	Digit& operator-=(const int&);
	Digit& operator*=(const Digit&);
	Digit& operator*=(const int&);
	Digit& operator/=(const Digit&);
	Digit& operator/=(const int&);
	Digit& operator%=(const Digit&);
	Digit& operator%=(const int&);
	operator int();
	operator double();
	void operator()(const int);
};

