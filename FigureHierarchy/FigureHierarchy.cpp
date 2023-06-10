#include <iostream>

//FIGURE INTERFACE
class Figure 
{
	int coor[2];
	std::string color;
public:
	void setCo() {
		std::cout << "Enter coordinate" << std::endl;
		std::cin >> coor[0] >> coor[1];
		std::cout << "Enter figure color" << std::endl;
		std::cin >> color;
	}
};
//FIGURE::CIRCLE
class Circle:public Figure
{
	double radius;
public:
	//CIRCLE SQUARE
	double circle_square() {
		return atan(1) * 4 * radius;
	}
	void set_sircle() {
		setCo();
		std::cout << "Enter circle radius" << std::endl;
		std::cin >> radius;
	
	}
};
//FIGURE::SQUARE
class Square :public Figure
{
	double sideLen;
public:
	double square_square() {
		return pow(sideLen, 2);
	}
	void set_square() {
		setCo();
		std::cout << "Enter side lenght square" << std::endl;
		std::cin >> sideLen;
	}
};
//FIGURE::TRIANGLE
class Triangle : public Figure
{
	double sideLenght;
public:
	void set_triangle() {
		setCo();
		std::cout << "Enter side lenght" << std::endl;
		std::cin >> sideLenght;
	}
	double triangle_square() {
		return sideLenght * sideLenght * std::sqrt(3) / 4;
	}
};
//FIGURE::RECTANGLE
class Rectangle : public Figure
{
	double height, lenght;
public:
	void set_rectangle() {
		setCo();
		std::cout << "Enter height and lenght" << std::endl;
		std::cin >> height >> lenght;			
	}
	double rectangle_square() {
		return height * lenght;
	}
};