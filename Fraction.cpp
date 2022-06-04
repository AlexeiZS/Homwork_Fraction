
#include <iostream>
using namespace std;

class Fraction
{
private:
	int integer;             //����� �����.
	int num;                 //���������.
	int denom;               //�����������.
public:
	//����������� ��� ����������.
	/*Fraction():integer(0),num(0),denom(0)
	{}*/
	//����������� � ����� �����������.
	Fraction(int n,int d):num(n),denom(d)
	{}
	//����������� � ����� �����������.
	Fraction(int i,int n, int d):integer(i),num(n),denom(d)
	{
		/*this->integer = i;
	    this->num = n;
	    this->denom = d;*/
	}
	//��������.
	Fraction summ(Fraction& f1)
	{
		int n, d;
		if (denom == f1.denom) {
			n = num + f1.num;
			d = denom;
		}
		else {
		n = num * f1.denom + denom * f1.num;
		d = f1.denom * denom;
	    }
		Fraction f2(n, d);
		return f2;
	}
	//���������.
	Fraction subtraction(Fraction& f1)
	{
		int n, d;
		if (denom == f1.denom) {
			n = num - f1.num;
			d = denom;
		}
		else {
			n = num * f1.denom - denom * f1.num;
			d = f1.denom * denom;
		}
		Fraction f2(n, d);
		return f2;
	}
	//���������.
	Fraction multiplication(Fraction& f1)
	{
		int n, d;
		n = num * f1.num;
	    d = denom * f1.denom;
		Fraction f2(n, d);
		return f2;
	}
	//�������.
	Fraction division(Fraction& f1)
	{
		int n, d;
		n = num * f1.denom;
		d = denom * f1.num;
		Fraction f2(n, d);
		return f2;
	}
	//�������� ������������ �����.
	int correct(Fraction f)
	{
		if (f.num >= f.denom)return 0;
	    else return 1;
	}
	//�������� ����� �����
	Fraction integerFract(Fraction& f)
	{
		int  n = f.num, d = f.denom;
		if (n % d == 0)
		{
			f.integer = (n / d);
			f.num = 0;
			f.denom = 0;
			return f;
		}
		else if (n % d != 0)
		{
			f.integer = (n / d);
			f.num = (n % d);
			f.denom = d;
		    return f;
		}

	}
	//�����.
	void print()
	{
		cout << num << "/" << denom ;
	}
	void print(Fraction& f)
	{
		cout << integer << "  " << num << "/" << denom;
	}
	  
};

int main()
{
	setlocale(LC_ALL, "ru");

	Fraction num1(7, 12);
	cout << " num1 = ";
	num1.print(); cout << endl;

	Fraction num2(3, 12);
	cout << " num2 = ";
	num2.print(); cout << endl;

	//��������.
	Fraction num3 = num1.summ(num2);
	cout << " num3 = ";
	num1.print();
	cout << "  +  "; 
	num2.print();
	cout<<" = ";
	if ( num3.correct(num3))
	{
	   num3.print(); cout << endl;
    }
	else
	{
		num3 = num3.integerFract(num3);
		num3.print(num3); cout << endl;
	}

	//���������.
	Fraction num4 = num1.subtraction(num2);
	cout << " num4 = ";
	num1.print();
	cout << "  -  ";
	num2.print();
	cout << " = ";
	num4.print(); cout << endl;

	//���������.
	Fraction num5 = num1.multiplication(num2);
	cout << " num4 = ";
	num1.print();
	cout << "  *  ";
	num2.print();
	cout << " = ";
	num5.print(); cout << endl;

	//�������.
	Fraction num6 = num1.division(num2);
	cout << " num4 = ";
	num1.print();
	cout << "  /  ";
	num2.print();
	cout << " = ";
	if (num6.correct(num6))
	{
		num6.print(); cout << endl;
	}
	else
	{
		num6.print(); cout << " = ";
		num6 = num6.integerFract(num6);
		num6.print(num6); cout << endl;
	}
	//num6.print(); cout << endl;

	
















	return  0;
}
















