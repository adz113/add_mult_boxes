// hw11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;
public:
    Box() {
        length = 5;
        width = 5;
    }
    void showData() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
    void setBox(int l, int w) {
        length = l;
        width = w;
    }
    Box operator+(const Box& a) {
        Box box;
        box.length = this->length + a.length;
        box.width = this->width + a.width;
        return box;
    }
    Box operator*(const Box& b) {
        Box box;
        box.length = this->length * b.length;
        box.width = this->width * b.width;
        return box;
    }
};

int main()
{
    int len1, wid1, len2, wid2;
    cout << "\nEnter the length of box #1: ";
    cin >> len1;
    cout << "\nEnter the width of box #1: ";
    cin >> wid1;
    cout << "\nEnter the length of box #2: ";
    cin >> len2;
    cout << "\nEnter the width of box #2: ";
    cin >> wid2;

    Box B1, B2;
    B1.setBox(len1, wid1);
    B2.setBox(len2, wid2);
    cout << "\nBox #1 " << endl;
    B1.showData();
    cout << "\nBox #2 " << endl;
    B2.showData();

    cout << "\nAdding box #1 and box #2" << endl;
    Box B3 = B1 + B2;
    B3.showData();

    cout << "\nMultiplying box #1 and box #2" << endl;
    Box B4 = B1 * B2;
    B4.showData();
    
    
    
}

