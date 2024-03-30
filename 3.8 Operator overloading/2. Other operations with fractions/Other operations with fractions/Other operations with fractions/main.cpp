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
	void Print() {
		std::cout << numerator_ << "/" << denominator_;
	}
	Fraction operator +(Fraction right) {
		int x, y, a, b;
		a = numerator_;
		b = denominator_;
		x = right.numerator_;
		y = right.denominator_;
		a *= right.denominator_;
		b *= right.denominator_;
		x *= denominator_;
		y *= denominator_;		
		return Fraction((a+x), y);
	}
	Fraction operator -(Fraction right) {
		int x, y, a, b;
		a = numerator_;
		b = denominator_;
		x = right.numerator_;
		y = right.denominator_;
		a *= right.denominator_;
		b *= right.denominator_;
		x *= denominator_;
		y *= denominator_;
		return Fraction((a - x), y);
	}
	Fraction operator *(Fraction right) {
		int x, y, a, b;
		a = numerator_;
		b = denominator_;
		x = right.numerator_;
		y = right.denominator_;
		if (a == y) {
			return Fraction((x), (b));
		}
		else if(x == b) {
			return Fraction((a), (y));
		}
		else
		return Fraction((a * x),(b * y));
	}
	Fraction operator /(Fraction right) {
		int x, y, a, b;
		a = numerator_;
		b = denominator_;
		y = right.numerator_;
		x = right.denominator_;
		if (a == y) {
			return Fraction((x), (b));
		}
		else if (x == b) {
			return Fraction((a), (y));
		}
		else
			return Fraction((a * x), (b * y));
	}
	Fraction operator ++() {
		numerator_ += denominator_;
		return Fraction(numerator_, denominator_);
	}
	Fraction operator --(int) {
		numerator_ -= denominator_;
		return Fraction(numerator_, denominator_);
	}
};
void print(Fraction& f1, Fraction& f2, Fraction& f3,std::string sign) {
	f1.Print();
	std::cout << sign;
	f2.Print();
	std::cout << " = ";
	f3.Print();
	std::cout << std::endl;
}
int main()
{ 
	setlocale(LC_ALL, "Russian");
	int a, b;
	std::cout << "¬ведите числитель дроби 1: ";
	std::cin >> a;
	std::cout << "¬ведите знаменатель дроби 1: ";
	std::cin >> b;
	Fraction f1(a, b);
	std::cout << "¬ведите числитель дроби 2: ";
	std::cin >> a;
	std::cout << "¬ведите знаменатель дроби 2: ";
	std::cin >> b;
	Fraction f2(a, b);
	Fraction f3(a,b);
	f3 = f1 + f2;
	print(f1,f2,f3," + ");
	f3 = f1 - f2;
	print(f1, f2, f3, " - ");	
	f3 = f1 * f2;
	print(f1, f2, f3, " * ");
	f3 = f1 / f2;
	print(f1, f2, f3, " / ");

	std::cout << "++";
	f1.Print();
	std::cout << " * ";
	f2.Print();
	std::cout << " = ";
	f3 = ++f1 * f2;
	f3.Print();
	std::cout << std::endl;
	std::cout << "«начение дроби 1 = ";
	f1.Print();
	std::cout << std::endl;
	
	f1.Print();
	std::cout << "--";
	std::cout << " * ";
	f2.Print();
	std::cout << " = ";
	f3 = f1-- * f2;
	f3.Print();
	std::cout << std::endl;
	std::cout << "«начение дроби 1 = ";
	f1.Print();
	std::cout << std::endl;
	
	return 0;
}