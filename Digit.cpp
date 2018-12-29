#include "Digit.h"


int Digit::counter = 0;

Digit::Digit()
{
	++counter;
}

Digit::Digit(const int d) :
	digit(d)
{
	++counter;
}
Digit::Digit(const double d) :
	digit(d)
{
	++counter;
}

Digit::Digit(const Digit& dig) :
	digit(dig.digit)
{
	++counter;
}

Digit::Digit(Digit&& dig) :
	digit(dig.digit)
{
	dig.digit = 0;
	++counter;
}

Digit::~Digit()
{
}

int Digit::getDigit() const {
	return digit;
}
void Digit::setDigit(const int d) {
	digit = d;
}
int Digit::getCounter() {
	return counter;
}

Digit Digit::operator-() {
	Digit tmp;
	tmp.digit = -digit;
	return tmp;
}
Digit Digit::operator+(const Digit& x) {
	Digit tmp;
	tmp.digit = digit + x.digit;
	return tmp;
}
Digit Digit::operator+(const int& x) {
	Digit tmp;
	tmp.digit = digit + x;
	return tmp;
}
Digit Digit::operator-(const Digit& x) {
	Digit tmp;
	tmp.digit = digit - x.digit;
	return tmp;
}
Digit Digit::operator-(const int& x) {
	Digit tmp;
	tmp.digit = digit - x;
	return tmp;
}
Digit Digit::operator*(const Digit& x) {
	Digit tmp;
	tmp.digit = digit * x.digit;
	return tmp;
}
Digit Digit::operator*(const int& x) {
	Digit tmp;
	tmp.digit = digit * x;
	return tmp;
}
Digit Digit::operator/(const Digit& x) {
	Digit tmp;
	tmp.digit = digit / x.digit;
	return tmp;
}
Digit Digit::operator/(const int& x) {
	Digit tmp;
	tmp.digit = digit / x;
	return tmp;
}
Digit Digit::operator%(const Digit& x) {
	Digit tmp;
	tmp.digit = digit % x.digit;
	return tmp;
}
Digit Digit::operator%(const int& x) {
	Digit tmp;
	tmp.digit = digit % x;
	return tmp;
}
bool Digit::operator>(const Digit& x) {
	return digit > x.digit;
}
bool Digit::operator<(const Digit& x) {
	return digit < x.digit;
}
bool Digit::operator==(const Digit& x) {
	return digit == x.digit;
}
bool Digit::operator!=(const Digit& x) {
	return digit != x.digit;
}
bool Digit::operator>=(const Digit& x) {
	return digit >= x.digit;
}
bool Digit::operator<=(const Digit& x) {
	return digit <= x.digit;
}
Digit& Digit::operator++() {
	++digit;
	return *this;
}
Digit Digit::operator++(const int) {
	Digit tmp = *this;
	++digit;
	return tmp;
}
Digit& Digit::operator--() {
	--digit;
	return *this;
}
Digit Digit::operator--(const int) {
	Digit tmp = *this;
	--digit;
	return tmp;
}

Digit& Digit::operator=(const Digit& copy) {
	if (this == &copy) {
		return *this;
	}
	digit = copy.digit;
	return *this;
}

Digit& Digit::operator=(Digit&& move) {
	if (this == &move) {
		return *this;
	}
	digit = move.digit;
	move.digit = 0;
	return *this;
}

Digit& Digit::operator+=(const Digit& x) {
	digit = digit + x.digit;
	return *this;
}
Digit& Digit::operator+=(const int& x) {
	digit = digit + x;
	return *this;
}
Digit& Digit::operator-=(const Digit& x) {
	digit = digit - x.digit;
	return *this;
}
Digit& Digit::operator-=(const int& x) {
	digit = digit - x;
	return *this;
}
Digit& Digit::operator*=(const Digit& x) {
	digit = digit * x.digit;
	return *this;
}
Digit& Digit::operator*=(const int& x) {
	digit = digit * x;
	return *this;
}
Digit& Digit::operator/=(const Digit& x) {
	digit = digit / x.digit;
	return *this;
}
Digit& Digit::operator/=(const int& x) {
	digit = digit / x;
	return *this;
}
Digit& Digit::operator%=(const Digit& x) {
	digit = digit % x.digit;
	return *this;
}
Digit& Digit::operator%=(const int& x) {
	digit = digit % x;
	return *this;
}
Digit::operator int() {
	return digit;
}
Digit::operator double() {
	return digit;
}
void Digit::operator()(const int x) {
	digit = x;
}
