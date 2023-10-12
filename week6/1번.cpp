#include <iostream>
using namespace std;

class Rect { 
private:
    int width;
    int height;
    int area;
public:
    Rect(int w = 0, int h = 0) :width(w), height(h) {
    }
    ~Rect() {
        cout << "Dying :: Width: " << width << ", Height: " << height << endl;
    }
    void setWidth(int W) { width = W; }
    void setHeight(int H) { height = H; }
    void setArea(int A) { area = A; }
    int getWidth() { return width; }
    int getHeight() { return height; }
    int getArea() { return area; }

    void display() {
        cout << "Width: " << width << " Height: " << height << " Area: " << area << endl;
    }  
};
int calcArea(Rect* r) { 
    return r->getWidth() * r->getHeight();
}
int main() {

    Rect* r = new Rect(); 

    r->setWidth(10);  
    r->setHeight(20);
    r->setArea(calcArea(r)); 

    r->display(); 

    delete r; 

    return 0;
}
