#include <iostream>
using namespace std;

class Point // создание своего ТИПА!!!
{
private: // реализация объекта
    int x; // поле объекта
    int y; // поле объекта
    char symbol; // поле объекта
public:   // интерфейс объекта
    void Print() // метод класса 
    {
        cout <<symbol<< "-> X: " << x << "\tY: " << y << endl;
    }
    void Init(char t, int _x, int _y) // метод класса 
    {
        symbol = t;
        x = _x;
        y = _y;
    }
    void SetSymbol(char sym)
    {
        symbol = sym;
    }
    char GetSymbol()
    {
        return symbol;
    }
    void SetX(int a)
    {
        if(a>=0)
        {
            x=a;
        }
    }
    int GetX()
    {
        return x;
    }
    void SetY(int b)
    {
        if(b>=0)
        {
            y=b;
        }
    }
    int GetY()
    {
        return y;
    }
};
int main() // клент
{
    Point a;
    //cout << sizeof(a) << endl; // 12

    a.Init('A', 10, -20);
    a.Print();
    a.SetSymbol('B');
    a.Print();
    a.SetX(5);
    a.Print();
    a.SetY(16);
    a.Print();

    char c = a.GetSymbol();
    cout << c << endl;

    int x = a.GetX();
    cout << x << endl;

    int y = a.GetY();
    cout << y << endl;
}