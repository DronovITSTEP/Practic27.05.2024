#include <iostream>

namespace foo1 {

    void foo() { std::cout << "foo1\n"; }
}
using namespace std;
using namespace foo1;

namespace foo1 {
    void foo2() { cout << "foo3\n"; }
}

namespace foo2 {
    void foo() { cout << "foo2\n"; }
}
void foo() { cout << "foo\n"; }

//void Test(int t) {
//    cout << "Start\n";
//    try {
//        if (t == 2) throw "Error - t is 2\n";
//        else if (t == 3) throw "Error - t is 3\n";
//    }
//    catch (const char* s) {
//        cout << "Exception\n";
//        throw;
//    }
//}

int main()
{
    /*cout << "start\n";
    try {
        cout << "before\n";

        throw 5;

        cout << "after\n";
    }
    catch (int h) {
        cout << "catch " << h << endl;
    }

    cout << "stop";*/
    /*try {
        float a = 9;
        float b = 2;
        if (b == 0) throw b;
        float res = a / b;

        cout << res;
        string s = "wre";
        if (!s.empty()) throw s;
    }
    catch (const char* str) {
        cout << str;
    }
    catch (float h) {
        cout << "Division by zero " << h;
    }
    catch (...) {
        cout << "error";
    }*/

    /*try {
    * 
        Test(3);
    }
    catch (const char* s) {
        cout << s;
    }
    cout << "End";*/

    ::foo();
        int arr[5]{ 6,8,9,1,3 };
    try {
        for (int i = 0; i < 7; i++) {
            if (i == 5) throw i;
        }
    }

        catch (int i){ std::cout << i;
    }
}

/*
 решение каждой задачи вынести в отдельное пространство имен

Создать абстрактный базовый класс Employer (служащий) с
чисто виртуальной функцией Print(). Создайте три производных
класса: President, Manager, Worker. Переопределите функцию
Print() для вывода информации, соответствующей каждому типу
служащего.

создать обработку исключительной ситуации, 
когда программа выходит за пределы массива
*/