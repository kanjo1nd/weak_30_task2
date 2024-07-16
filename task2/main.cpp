#include <iostream>

using namespace std;

class Shape {
protected:
	double m_value1;
	double m_value2;
public:
	void SetDimension(const double value1, const double value2) {
		m_value1 = value1;
		m_value2 = value2;
	}
	virtual void Show() const {
		cout << "Value is undefined" << endl;
	}
};

class Square : public Shape {
	virtual void Show() const {
		cout << "Square: " << m_value1 << ", "  << m_value2 << endl;
	}
};

class Rectangle : public Shape {
	virtual void Show() const {
		cout << "Rectangle: " << m_value1 << ", " << m_value2 << endl;
	}
};

class Circle : public Shape {
	virtual void Show() const {
		cout << "Circle: " << m_value1 << ", " << m_value2 << endl;
	}
};

class Ellipse : public Shape {
	virtual void Show() const {
		cout << "Ellipse: " << m_value1 << ", " << m_value2 << endl;
	}
};

int main() {
	Shape* figure = nullptr;

	int choice = 0;

	cout << "1. Square" << endl;
	cout << "2. Rectangle" << endl;
	cout << "3. Circle" << endl;
	cout << "4. Ellipse" << endl;
	cout << "0. Exit" << endl;
	cout << "Make your choice: ";

	cin >> choice;

	switch (choice)
	{
	case 1:
		figure = new Square;
		figure->SetDimension(23.3, 34);
		break;
	case 2:
		figure = new Rectangle;
		figure->SetDimension(3.3, 2);
		break;
	case 3:
		figure = new Circle;
		figure->SetDimension(5.3, 1.2);
		break;
	case 4:
		figure = new Ellipse;
		figure->SetDimension(2, 4);
		break;
	case 0:
		return 0;
	}

	figure->Show();

	delete[] figure;

	return 0;
}