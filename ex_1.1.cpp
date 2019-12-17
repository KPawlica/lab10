#include <iostream>
using namespace std;

class Circle{
    public:
        float radius;
        float area(){
            return 3.14*radius*radius;
        }
};

int main(){
    Circle cir,okr;
    cir.radius = 1;
    okr.radius = 7;

    cout << cir.area() << endl;
    cout << okr.area() << endl;
}