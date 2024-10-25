#include <iostream>
using namespace std;

// Base class A
class A {
public:
    int a = 10;

    void displayA() {
        cout << "This is class A, a = " << a << endl;
    }
};

// Class B inheriting from class A
class B : public A {
public:
    int b = 20;

    void displayB() {
        cout << "This is class B, a = " << a << ", b = " << b << endl;
    }
};

// Class C inheriting from class A
class C : public A {
public:
    int c = 30;

    void displayC() {
        cout << "This is class C, a = " << a << ", c = " << c << endl;
    }
};

// Class D inheriting from class A
class D : public A {
public:
    int d = 40;

    void displayD() {
        cout << "This is class D, a = " << a << ", d = " << d << endl;
    }
};

// Class E inheriting from class B
class E : public B {
public:
    int e = 50;

    void displayE() {
        cout << "This is class E, a = " << a << ", b = " << b << ", e = " << e << endl;
    }
};

int main() {
    B objB;
    C objC;
    D objD;
    E objE;

    // Accessing methods and variables in each class
    cout << "Output from class B:" << endl;
    objB.displayA();
    objB.displayB();

    cout << "\nOutput from class C:" << endl;
    objC.displayA();
    objC.displayC();

    cout << "\nOutput from class D:" << endl;
    objD.displayA();
    objD.displayD();

    cout << "\nOutput from class E:" << endl;
    objE.displayA();
    objE.displayB();
    objE.displayE();

    return 0;
}
