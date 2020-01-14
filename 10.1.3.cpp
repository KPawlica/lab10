#include <iostream>
using namespace std;

class Circle {
    public:
    float radius_;
    float area();
};

    float Circle::area(){
        return 3.14*radius_*radius_;

    }



int main(){
    Circle cir;
    cir.radius_=3;
    cout << cir.area() << endl;
}
