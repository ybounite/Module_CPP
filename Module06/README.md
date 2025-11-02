
## Type Casting - C++ 


*** Implicit conversion ***

```
# include <iostream>
using namespace std;

// Type Casting - C++ : Implicit conversion
struct A {
    A(int){ cout << "initialization constructer\n";}    // converting constructor
};

struct B
{
    explicit B(int) {}
};

// int main() {
//     A a = 1; // OK : copy-initialization selcts A::A(int
//     /*
//         this error 
//         B a = 10;
//     */
// }

int main() {

    /*  Implicit conversion form long to short */
    cout << "\nImplicit conversion form long to short\n";
    long    a = 32766;
    short   b = a;
    cout << "a = " << a << ", d = " << b << endl;

    /*Implicit conversion form float to int */
    cout << "\nImplicit conversion form float to int\n";
    float   c = 5.6;
    int     d = c;
    cout << "c = "<< c << ", d = " << d << endl;

    /*Implicit conversion form int to bool*/
    cout << "\nImplicit conversion form int to bool\n";
    int     e = -5;
    bool    f = e;
    cout << "e = " << e << ", f = " << f << endl;
}
```
** Explice convesion
```
test

```
