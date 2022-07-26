#include <iostream>
using namespace std;

class Figure {
protected:
	int sides_count=0;
	string name;
public:
	int get_sides_count() {
		return sides_count;
	}
	string get_name() {
		return name;
	}
	Figure(string new_name,int new_sides_count) {
		name = new_name;
		sides_count = new_sides_count;
	}
};

class Triangle:public Figure {
public:
	int get_sides_count() {
		return sides_count;
	}
	string get_name() {
		return name;
	}
	Triangle(string name1,int a) :Figure("Фигура", 0) {
		name = name1;
		sides_count = a;
	}
};

class Quadrangle:public Figure {
public:
	int get_sides_count() {
		return sides_count;
	}
	string get_name() {
		return name;
	}
	Quadrangle(string name1, int a) :Figure("Фигура", 0) {
		name = name1;
		sides_count = a;
	}
};

int main() {
	setlocale(LC_ALL, "rus");
	Figure figure("Фигура",0);
	Triangle triangle("Треугольник",3);
	Quadrangle quadrangle("Четырёхугольник",4);
	cout << "Количество сторон:" << endl;
	cout << figure.get_name() << ": " << figure.get_sides_count() << endl;
	cout << triangle.get_name() << ": " << triangle.get_sides_count() << endl;
	cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << endl;
	return 0;
}