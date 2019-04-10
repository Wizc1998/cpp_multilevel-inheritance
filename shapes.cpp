#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;


class Shape {
	protected:
		
		

	public:
		virtual float area() const = 0;
		virtual void display() const = 0;
};

class Circle : public Shape {
	protected:
		float Pi;
		int radius;
	public:
		Circle(int r){
			Pi = 3.14159;
			radius = r;
		}
	virtual float area() const{
		return radius*radius*Pi;
	}
	virtual void display() const {
		cout << "Circle: " << radius << " | Area = "<< this->area() << endl;
	}
};

class Rectangle : public Shape {
	protected:
		int length;
		int width;
	public:
		Rectangle(int l, int w){
			length = l;
			width = w;
		}
	virtual float area() const{
		return length*width;
	}
	virtual void display() const {
		cout << "Rectangle: " << length << ", " << width << " | Area = "<< this->area() << endl;
	}
};


class Quadrilateral : public Shape {
	protected:
		int length;
		int height;	

	public:
		virtual float area() const = 0;
		virtual void display() const = 0;
};

class Trapezoid : public Quadrilateral {
	protected:
		int side;
	public:
		Trapezoid(int l, int h, int s){
			length = l;
			height = h;
			side = s;
		}
	virtual float area() const{
		return (length+side)/2*height;
	}
	virtual void display() const {
		cout << "Trapezoid: " << length << ", " << height << ", " << side << " | Area = "<< this->area() << endl;
	}
};


