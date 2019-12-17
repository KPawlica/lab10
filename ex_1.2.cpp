#include <iostream>
using namespace std;

class Circle {
    private:
    float *radius_;

public:
    Circle(float R)
    {
        radius_ = new float;
        *radius_ = R;
        cout << "Parameters inside the constructor: " << *radius_ << endl;
    }

    ~Circle()
    {
        delete radius_;
        cout << "deleting radius" << endl;

    }

};
int main(){
    Circle cir(78);
}













/*class Circle{
    public:
        float radius*;
        float area(){
            return 3.14*radius*radius;
        }
};

int main(){
    Circle cir,okr;
    cir->radius = 1;
    okr->radius = 7;

    cout << cir.area() << endl;
    cout << okr.area() << endl;
}
*/