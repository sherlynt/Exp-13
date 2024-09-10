#include<iostream>
using namespace std;
class room
{
    private: 
    double length, breadth;
    public:
    room()
    {
        length = 8.2;
        breadth = 2.2;
    }
    room(double l, double b)
    {
        length = l;
        breadth = b; 
    }
    room(double len)
    {
        length = len;
        breadth = 4.2;
    }
    double calculateArea()
    {
        return length * breadth;
    }
};
int main()
{
    room room1;
    cout << "When no argument is passed:" << endl;
    cout << "Area of room = " << room1.calculateArea() << endl;
    room room2(8.2, 2.2);
    cout << "\nWhen (8.2, 2.2) is passed:" << endl;
    cout << "Area of room = " << room2.calculateArea() << endl;
    room room3(4.2);
    cout << "\nWhen breadth is fixed to 4.2 and (4.2) is passed:" << endl;
    cout << "Area of room = " << room3.calculateArea() << endl;
    return 0;
}
