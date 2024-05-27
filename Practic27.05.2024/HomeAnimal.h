#pragma once
#include <iostream>
using namespace std;

/*
������� ������� ����� ��������� �������� � �����������
������ �������, ������, ��������, ������.
� ������� ������������ ���������� ��� ������� ��������� � ��� ��������������.
���������� ��� ������� �� ������� �������:
Sound � ������ ���� ��������� (����� ������� � �������);
Show � ���������� ��� ���������;
Type � ���������� �������� ��� �������.
*/
class Animal {
protected:
	string color;
	string name;
	string type;
public:
	Animal(string color, string name, string type):
		color{color}, 
		name {name}, 
		type{type}
	{}

	virtual string Sound() = 0;
	virtual string Show() = 0;
	virtual string Type() = 0;
	virtual void Display(){}
};

class Cat: public Animal{
public:
	Cat(string name, string color, string type): Animal(color, name, type){}

	string Sound() { return "Meow"; };
	virtual string Show() {
		return name;
	}
	virtual string Type() { return type; };
	void Display(int i) { }
};
class Dog: public Animal{
public:
	Dog(string name, string color, string type) : Animal(color, name, type) {}
	string Sound() { return "Woof"; };
	virtual string Show() {
		return name;
	}
	virtual string Type() { return type; };

};
class Hamster: public Animal{
public:
	Hamster(string name, string color, string type) : Animal(color, name, type) {}
	string Sound() { return "pi-pi"; };
	virtual string Show() {
		return name;
	}
	virtual string Type() { return type; };

};
class Parrot: public Animal{
public:
	Parrot(string name, string color, string type) : Animal(color, name, type) {}
	string Sound() { return "kar"; };
	virtual string Show() {
		return name;
	}
	virtual string Type() { return type; };

};