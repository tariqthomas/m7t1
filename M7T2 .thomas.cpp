#include <iostream>
using namespace std;

// Corrected the class name from 'rectangle' to 'Rectangle' for consistency
class Rectangle {
private:
    double width;
    double length;

public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};


void Rectangle::setWidth(double w) {
    if (w>0){
        width = w;
    }else {
        cout<<"";
        width=0;
    }
   
}

void Rectangle::setLength(double len) {
    if (len>0){
        length = len; 
    }else{
        cout<<"";
        length=0;
    }
    

}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getArea() const {
    if (width > 0 && length > 0)
    return width * length;
    else
        return 0; // Invalid rectangle
}

int main() {
    Rectangle box; 
    double rectWidth; 
    double rectLength; 

cout << "This program will calculate the area of a rectangle.\n";

    do {
    cout << "What is the width? ";
    cin >> rectWidth;
box.setWidth(rectWidth);
}while (rectWidth <= 0);
    
do{
    cout << "What is the length? ";
    cin >> rectLength;
box.setLength(rectLength);
}while (rectLength <= 0);
   

    cout << "Here is the rectangle's data: \n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;

    return 0;
}
