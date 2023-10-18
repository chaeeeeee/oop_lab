#include <iostream>
#include <ctime>  
#include <cstdlib>  
#include <algorithm>
using namespace std;

class Rec {
private:
    int width;
    int height;
    int area;
public:
    Rec() : width(0), height(0), area(0) {}
    ~Rec() {
        cout << "Dying :: Width: " << width << ", Height: " << height << endl;
    }
    int getWidth() const { return width; }
    int getHeight() const { return height; }
    int getArea() const { return area; }

    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }
    void setArea(int a) { area = a; }

    void display() const {
        cout << "width: " << width << ", height: " << height << ", area: " << area << endl;
    }
};
int calcArea(Rec& r) {
    return r.getWidth() * r.getHeight();
}
bool compare(Rec* r1, Rec* r2) { //면적 기준 오름차순 정렬
    return (*r1).getArea() < (*r2).getArea();
}
int main() {
    Rec* ar[3];  // Rec 객체에 대한 포인터를 포함하는 배열 ar을 선언

    for (int i = 0; i < 3; ++i) { 
        ar[i] = new Rec(); //Rec 객체를 동적으로 생성하여 배열 ar에 순서대로 저장
    }
    for (int i = 0; i < 3; ++i) {  
        int randWidth = rand() % 10 + 1;
        int randHeight = rand() % 10 + 1;
        ar[i]->setWidth(randWidth);
        ar[i]->setHeight(randHeight);
    }
    for (Rec* r : ar) { 
        r->setArea(calcArea(*r)); //ar의 각 포인터가 가리키는 Rec 객체의 면적을 구하여 Rec 객체의 area 멤버에 설정
    }
    for (Rec* rec : ar) { 
        rec->display(); //모든 Rec 객체들을 출력
    }
    cout << "" << endl;

    cout << "After sorting:" << endl;
    sort(ar, ar + 3, compare); //Rec 객체들을 면적 기준으로 오름차순으로 정렬
    for (Rec* rec : ar) {
        rec->display();
    }

    cout << "" << endl;
    for (Rec* rec : ar) {  //ar의 포인터가 가리키는 모든 Rec 객체들을 삭제
        delete(rec);
    }
    return 0;
}
