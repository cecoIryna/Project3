#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator; 
    int denominator; 

public:

    void Input()
    {
        cin >> numerator >> denominator;
    }

    void Show()
    {
        cout << numerator << "/" << denominator << endl;
    }

    int GetNumerator()
    {
        return numerator;
    }

    void SetNumerator(int _numerator)
    {
        numerator = _numerator;
    }

    int GetDenominator()
    {
        return denominator;
    }

    void SetDenominator(int _denominator)
    {
        if (_denominator != 0)
            denominator = _denominator;
    }

    void Init(int _numerator, int _denominator)
    {
        numerator = _numerator;
        if (_denominator != 0)
            denominator = _denominator;
    }

    Fraction Add(Fraction b)
    {
        Fraction result;
        result.numerator = numerator * b.denominator + b.numerator * denominator;
        result.denominator = denominator * b.denominator;
        return result;
    }

    Fraction Subtract(Fraction b)
    {
        Fraction result;
        result.numerator = numerator * b.denominator - b.numerator * denominator;
        result.denominator = denominator * b.denominator;
        return result;
    }

    Fraction Multiply(Fraction b)
    {
        Fraction result;
        result.numerator = numerator * b.numerator;
        result.denominator = denominator * b.denominator;
        return result;
    }

    Fraction Divide(Fraction b)
    {
        Fraction result;
        result.numerator = numerator * b.denominator;
        result.denominator = denominator * b.numerator;
        return result;
    }
};

int main()
{
    Fraction a;
    a.Init(1, 2);
    cout << "a= ";
    a.Show();
    Fraction b;
    b.Init(3, 4);
    cout << "b= ";
    b.Show();

    Fraction sum = a.Add(b);
    cout << "a+b= ";
    sum.Show();

    Fraction difference = a.Subtract(b);
    cout << "a-b= ";
    difference.Show();

    Fraction product = a.Multiply(b);
    cout << "a*b= ";
    product.Show();

    Fraction quotient = a.Divide(b);
    cout << "a/b= ";
    quotient.Show();
}