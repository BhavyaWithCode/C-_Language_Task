#include<iostream>
using namespace std;

class arithmetic {
private:
    int result;

public:
    arithmetic() {
        result = 0;
    }

    int getresult() {
        return result;
    }

public:
    void setresult(int value) {
        result = value;
    }
};


class calculator : public arithmetic {
public:
    void calculate(int a, int b) {
        setresult(a / b);
    }

    void calculate(int a, int b, int c) {
        setresult(a - b - c);
    }

    void calculate(int a, int b, int c, int d) {
        setresult(a * b * c * d);
    }

    void calculate(int a, int b, int c, int d, int e) {
        setresult(a + b + c + d + e);
    }
};

int main() {
    calculator calc;

    calc.calculate(10, 2);
    cout << "Result: " << calc.getresult() << endl;

    calc.calculate(10, 2, 3);
    cout << "Result: " << calc.getresult() << endl;

    calc.calculate(1, 2, 3, 4);
    cout << "Result: " << calc.getresult() << endl;

	calc.calculate(1, 2, 3, 4, 5);
    cout << "Result: " << calc.getresult() << endl;

    return 0;
}

