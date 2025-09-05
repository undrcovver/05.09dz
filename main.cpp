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
    void Sum(Point b) 
    {
        cout << "+" << " X: " << x + b.x << "\tY: " << y + b.y << endl;
    }
        void Mil(Point b) 
    {
        cout << "-" << " X: " << x - b.x << "\tY: " << y - b.y << endl;
    }
        void Mul(Point b) 
    {
        cout << "*" << " X: " << x + b.x << "\tY: " << y * b.y << endl;
    }

};
int main() // клент
{
    Point a,b;
    //cout << sizeof(a) << endl; // 12

    a.Init('A', 10, -20);
    a.Print();

    b.Init('B', 5, 16);
    b.Print();

    a.Sum(b);
    a.Mil(b);
    a.Mul(b);

}