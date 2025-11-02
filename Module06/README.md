
## Type Casting - C++ 


***Implicit conversion***
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

***Explice convesion***
        Many conversion specially those thaat imply a differant interpreatation of the value,
    require an explicit conversion.
    *Explicit type conversion: ```Functional``` and ```c-like castinf```
```

# include <iostream>
using namespace std;

// Type Casting - C++ : Explicit conversion
struct A {
    int _v;

    A(int v){ _v = v; }
};

struct B
{
    int _v;

    B(int v){ _v = v; }
};

int main() {
    short k = 1;
    int l;

    l = (int) k; // c-lik cast notation
    l = int (k); // Function notation

    A *a = new A(5);

    // b *b = a; // cannot convert 'A*' to 'B*' in initialization
    /* Traditional explicit type-casting allows to convert any ponter into any other pointer type,
        independently of the types they point to. The subsequent call to member will produce either a run-time error oer a unexpected result.
    */
    B *b = (B*)a;
    cout << b->_v << endl;
}

```
