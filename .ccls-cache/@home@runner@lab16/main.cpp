#include <iostream>
using namespace std;

double findArea(double);
double findCircumference(double);
double getRadius();

int main() 
{
  double radius; //the radius of the circle
  double area; //the area of the circle
  double circumference; //the circumference of the circle
  
  //get the value of the radius from the user
  radius = getRadius();
  
  //determine the area and circumference
  area = findArea(radius);
  circumference = findCircumference(radius);
  
  //output the results
  cout << "A circle of radius " << radius << " has an area of: " << area <<endl;
  cout << "and a circumference of: "<< circumference << endl;
  
  return 0;
}

double findArea(double radius)
{
  return 3.14159 * (radius * radius);
}

double findCircumference(double radius)
{
  return 2 * (3.14159 * radius);
}

double getRadius() {
  double radius;
  cout << "Enter the radius of the circle: ";
  cin >> radius;

  return radius;
}