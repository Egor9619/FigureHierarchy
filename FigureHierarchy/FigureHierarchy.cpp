#include <iostream>

//FIGURE INTERFACE
class Figure 
{
public:
	int coor[2];
	std::string color;
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
		std::cout << "Enter circle coor" << std::endl;
		std::cin >> coor[0] >> coor[1];
		std::cout << "Enter circle radius" << std::endl;
		std::cin >> radius;
		std::cout << "Enter circle color" << std::endl;
		std::cin >> color;
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
		std::cout << "Enter square coordinate" << std::endl;
		std::cin >> coor[0] >> coor[1];
		std::cout << "Enter side lenght square" << std::endl;
		std::cin >> sideLen;
		std::cout << "Enter square color" << std::endl;
		std::cin >> color;
	}
};