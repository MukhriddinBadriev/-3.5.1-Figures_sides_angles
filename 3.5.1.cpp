#include <iostream>
using namespace std;

class Figure {
protected:
	int sides_count=0;
	string name="Фигура";
public:
	int get_sides_count() {
		return sides_count;
	}
	string get_name() {
		return name;
	}
};

class Triangle:public Figure {
public:
	int get_sides_count() {
		sides_count = 3;
		return sides_count;
	}
	string get_name() {
		name = "Треугольник";
		return name;
	}
};

class Quadrangle:public Figure {
public:
	int get_sides_count() {
		sides_count = 4;
		return sides_count;
	}
	string get_name() {
		name = "Четырёхугольник";
		return name;
	}
};

int main() {
	setlocale(LC_ALL, "rus");
	Figure figure;
	Triangle triangle;
	Quadrangle quadrangle;

	cout << "Количество сторон:" << endl;
	cout << figure.get_name() << ": " << figure.get_sides_count() << endl;
	cout << triangle.get_name() << ": " << triangle.get_sides_count() << endl;
	cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << endl;

	return 0;
}