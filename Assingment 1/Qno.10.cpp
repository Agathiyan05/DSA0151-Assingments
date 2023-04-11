#include <iostream>
#include <cmath>

int main()
{
    double radius, length, width, areaCircle, areaRectangle;


    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

   
    areaCircle = M_PI * pow(radius, 2);
    areaRectangle = length * width;

   
    std::cout << "The area of the circle is " << areaCircle << std::endl;
    std::cout << "The area of the rectangle is " << areaRectangle << std::endl;

    return 0;
}

