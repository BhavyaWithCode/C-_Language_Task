#include<iostream>
using namespace std;

class message {
    string internalmessage;
public:
    message(string message = " ") {
        internalmessage = message;
    }
    
    void printmessage() {
        cout << "Internal Message: " << internalmessage << endl;
    }
    
    void printmessagewithaddition(string additionalmessage) {
        cout << "Internal Message: " << internalmessage << " " << additionalmessage << endl;
    }
};

int main() {
    message message1("Hello");
    message1.printmessage();
    
    message message2("Hi");
    message2.printmessagewithaddition("There!");
    
    return 0;
}

