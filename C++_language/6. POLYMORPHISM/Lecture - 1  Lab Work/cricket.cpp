#include<iostream>
using namespace std;

class cricket {
public:
    void getTotalOver() {
        cout << "This is the cricket class " << endl;
        cout << "Total overs in cricket match vary " << endl;
    }
};


class T20Match : public cricket {
public:
    void getTotalOver() {
        cout << "This is the T20 Match class " << endl;
        cout << "Total overs in T20 match are 20" << endl;
    }
};

class TestMatch : public cricket {
public:
    void getTotalOver() {
        cout << "This is the Test Match class " << endl;
        cout << "Total overs in Test match are 90" << endl;
    }
};

int main() {
    T20Match match1;
    TestMatch match2;

    match1.getTotalOver();
    match2.getTotalOver();
}

