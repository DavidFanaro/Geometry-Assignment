#include <iostream>
#include <cmath>

using namespace std;

void CircleArea () {
    const float PI = 3.14159;

    cout << "Enter Circle's Radius: ";
    float rad;
    cin >> rad;

    float area = PI * pow(rad , 2);

    cout << "The Area is " << area <<  endl;

}

void RectangleArea () {

    cout << "Enter the Length: ";
    float rectangleLength;
    cin >> rectangleLength;
    
    cout << "Enter the Width: ";
    float rectangleWidth;
    cin >> rectangleWidth;

    float area = rectangleWidth * rectangleLength;
     
    cout << "The Area is " << area <<  endl;    
}

void TriangleArea () {

    cout << "Enter the length of the triangle's base: ";
    float triangleBase;
    cin >> triangleBase;

    cout << "Enter the triangle's height: ";
    float triangleHeight;
    cin >> triangleHeight;

    float area = (triangleHeight * triangleBase) / 2;

    cout << "The Area is " << area <<  endl;
}

void selectCalculator() {
     
    cout << "1. Calculate the area of a Circle \n2. Calculate the area of a Rectangle\n3. Calculate the area of a Triangle\n4. Quit" << endl;

    cout << "Selection: ";
    int selection;
    cin >> selection;

    switch (selection)
    {
    case 1:
        CircleArea();
        break;
    
    case 2:
        RectangleArea();
        break;

    case 3:
        TriangleArea();
        break;

    case 4:
        cout << "Quitting" << endl; 
        break;

    default:
        cout << "Error!! Invalid Selection" << endl;
        break;
    }


}

int main (){

    selectCalculator();

    return 0;
}

