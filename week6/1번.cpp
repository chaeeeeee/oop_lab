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
int calcArea(Rect* r) { //외부 함수
    return r->getWidth() * r->getHeight();
}
int main() {

    Rect* r = new Rect(); //사각형 객체를 가리키는데 사용될 수 있는 포인터 r

    r->setWidth(10);   //r이 가리키는 객체의 폭과 높이를 각각 10, 20으로 설정
    r->setHeight(20);  //r이 가리키는 객체의 폭과 높이를 각각 10, 20으로 설정
    r->setArea(calcArea(r)); 

    r->display(); 

    delete r; 

    return 0;
}
