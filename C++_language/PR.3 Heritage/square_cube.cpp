#include<iostream>
using namespace std;

class number {
private:
    int num;
public:
    void setnumber(int n) {
        num = n;
    }
    int getnumber() {
        return num;
    }
};

class square : public number {
public:
    void calculatesquare() {
        int square = getnumber() * getnumber();
        cout << "Square:- " << square << endl;
    }
};

class cube : public number {
public:
    void calculatecube() {
        int cube = getnumber() * getnumber() * getnumber();
        cout << "Cube:- " << cube << endl;
    }
};

int main() {
    square squareobj;
    cube cubeobj;

    int number;
    cout << "Enter a number: ";
    cin >> number;

    squareobj.setnumber(number);
    cubeobj.setnumber(number);

    squareobj.calculatesquare();
    cubeobj.calculatecube();

    return 0;
}

