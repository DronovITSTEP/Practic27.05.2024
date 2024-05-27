#include <iostream>
#include "Transport.h"
#include "BasicLink.h"
#include "HomeAnimal.h"

using namespace std;



int main()
{
    /*Transport car;
    car.Car();*/

    //classA a;
    //a.funcBasic();

    //classA a;
    //Basic* basic = new classA();
    //basic->funcBasic();
    //basic = &a;
    //basic = new classB;
    //basic->funcBasic();

    /*Basic** arr = new Basic*[3];
    arr[0] = new classA;
    arr[1] = new classB;
    arr[2] = new classC;

    for (size_t i = 0; i < 3; i++)
    {
        arr[i]->funcBasic();
    }*/

    Animal* cat = new Cat("Barsik", "black", "cat");
    cout << cat->Show() <<" "<< cat->Sound() << " " << cat->Type() << endl;
}
