#pragma once

#include <iostream>
using namespace std;

class Steering {
protected:
	void Roolit() {
		cout << "Steering\n";
	}
};
class Wheel {
protected:
	void Ehat() {
		cout << "Wheel\n";
	}
};

class Body {
protected:
	void Comfort() {
		cout << "Body\n";
	}
};

class Transport : Steering, Wheel, Body {
public:
	void Car() {
		Roolit();
		Ehat();
		Comfort();
	}
	void Ehat() {
		cout << "Car ehat";
	}
};
