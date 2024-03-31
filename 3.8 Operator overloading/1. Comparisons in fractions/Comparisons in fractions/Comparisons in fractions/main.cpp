#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	friend void foo(Fraction& one, Fraction& to);
	bool operator >(Fraction right) {
		foo(*this, right);
		if (numerator_ > right.numerator_)
			return 1;
		else return 0;
	}
	bool operator ==(Fraction right) {
		foo(*this, right);
		if (numerator_ == right.numerator_)
			return 1;
		else return 0;
	}
	bool operator !=(Fraction right) {
		foo(*this, right);
		if (numerator_ != right.numerator_)
			return 1;
		else return 0;
	}
	bool operator <(Fraction right) {
		foo(*this, right);
		if (numerator_ < right.numerator_)
			return 1;
		else return 0;
	}
	bool operator <=(Fraction right) {
		foo(*this, right);
		if (numerator_ <= right.numerator_)
			return 1;
		else return 0;
	}
	bool operator >=(Fraction right) {
		foo(*this, right);
		if (numerator_ >= right.numerator_)
			return 1;
		else return 0;
	}
};
void foo(Fraction& one, Fraction& to) {
	int x, y;
	x = one.denominator_;
	y = to.denominator_;
	one.numerator_ *= y;
	to.numerator_ *= x;
	one.denominator_ *= y;
	to.denominator_ *= x;
}
int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);
	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}