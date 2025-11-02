
## Type Casting in C++

This repository demonstrates **type casting** in C++ — both **implicit** and **explicit** conversions — with examples and explanations. It provides a clear overview of the types of casting in C++ and how each one is applied.

---

## 🔹 Implicit Conversion

Implicit conversions (also called *automatic type conversions*) are performed by the compiler when it deems them safe and appropriate. These occur without explicit user instruction.

```cpp
#include <iostream>
using namespace std;

// Type Casting - C++: Implicit Conversion
struct A {
    A(int) { cout << "Initialization constructor\n"; }  // Converting constructor
};

struct B {
    explicit B(int) {}  // Explicit constructor
};

int main() {

    // Implicit conversion from long to short
    cout << "\nImplicit conversion from long to short\n";
    long a = 32766;
    short b = a;  // Implicit cast from long to short
    cout << "a = " << a << ", b = " << b << endl;

    // Implicit conversion from float to int
    cout << "\nImplicit conversion from float to int\n";
    float c = 5.6;
    int d = c;  // Implicit cast from float to int
    cout << "c = " << c << ", d = " << d << endl;

    // Implicit conversion from int to bool
    cout << "\nImplicit conversion from int to bool\n";
    int e = -5;
    bool f = e;  // Implicit cast from int to bool (non-zero → true)
    cout << "e = " << e << ", f = " << f << endl;

    // Implicit conversion to struct object
    cout << "\nImplicit conversion to struct object\n";
    A a1 = 10; // Implicit conversion using A::A(int)
    return 0;
}
