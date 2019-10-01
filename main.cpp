#include <iostream>

using namespace std;

int main()
{
    int x = 4;
    int * ptr;
    ptr = &x;

    cout << x << endl; //4
    cout << ptr << endl; //235
    cout << *ptr << endl; //4
    cout << &x << endl; //235
    *ptr = 5;
    cout << *ptr <<endl; //5
    cout << "Hola soy José" << endl;

    return 0;
}
