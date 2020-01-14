#include <iostream>
using namespace std;

class Circle {
private:
public:
int radius;

    // Setter
    void setRadius(int r) {
      radius = r;
    }
    // Getter
    int getRadius() {
      return radius;
    }
};
int main(){
    Circle myObj;
    myObj.setRadius(1000);
    cout << myObj.getRadius() << endl;
}