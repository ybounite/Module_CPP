
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
```
                              ### 🔹 Explicit Conversion

Explicit conversions (also known as *type casting*) are conversions that you, as the programmer, explicitly define using a casting operator. These conversions are necessary when implicit conversion isn't allowed, or if it could result in an unintended outcome (like data loss or unexpected behavior).

In C++, explicit casting can be done using:

- **C-like Cast Notation**: `(type)value`
- **Functional Cast Notation**: `type(value)`
  
Alternatively, in modern C++ you can use the **C++ casting operators** such as `static_cast<>`, `dynamic_cast<>`, `reinterpret_cast<>`, and `const_cast<>` for safer, more readable, and clearer type conversions.

### Example: C++ Explicit Type Casting

```cpp
#include <iostream>
using namespace std;

// Type Casting - C++: Explicit Conversion
struct A {
    int _v;
    A(int v) { _v = v; }
};

struct B {
    int _v;
    B(int v) { _v = v; }
};

int main() {
    short k = 1;
    int l;

    // C-like cast notation: explicit cast from short to int
    l = (int) k;   // C-like cast notation
    cout << "After C-like cast, l = " << l << endl;

    // Functional cast notation: explicit cast from short to int
    l = int(k);    // Functional cast notation
    cout << "After Functional cast, l = " << l << endl;

    A *a = new A(5);  // Create an object of type A

    // Pointer casting: converting from A* to B* (unsafe and not recommended)
    /*
        The following line would typically cause a runtime error because A and B are
        not related classes. Forcefully casting pointers is dangerous:
    */
    B *b = (B*)a;  // Explicit cast from A* to B* (unsafe)
    cout << "After pointer cast, b->_v = " << b->_v << endl;

    delete a;  // Clean up memory
    return 0;
}
```
