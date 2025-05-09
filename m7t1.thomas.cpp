#include <iostream>
using namespace std;


class Restaurant {
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
   
    Restaurant(string n, double r) {
        name = n;
        rating = r;
    }
   
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
   
    void printInfo() {
        cout << "Name: " << name << " ";
        cout << "(" << rating << "/5 stars)" << endl;
    }
  
};

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;
    
    Restaurant lunch_place = Restaurant("little ceasar", 5.0);
    Restaurant breakfast_place = Restaurant("ihop", 2.5);
    cout << "Review info" << endl;
    cout << "Breakfast:" << endl;
    breakfast_place.printInfo();
 
    cout << "Lunch:" << endl;
    lunch_place.printInfo();
  
    Restaurant dinner_place=Restaurant("red lobster", 3.0);
    cout<<"dinner:"<<endl;
    dinner_place.printInfo();

    return 0;

}