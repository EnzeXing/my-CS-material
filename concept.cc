#include <iostream>

using namespace std;

int main() {
  cout << 1 << endl; // 1 is a value
  cout << 1 + 2 << endl; // 1 + 2 is a value. It yields a value
  
  int x; // x is a variable of type Int. This is variable declaration. x doesn't have a value yet.
  x = 0; // assignment (or mutation)
  cout << "The value of x is " << x << endl; // print 0
  x = 1; // assignment again
  cout << "The value of x is " << x << endl; // print 1
  
  int y = 3; // This is variable initialization. y is declared and assigned to value 3
  cout << "The value of y is " << y << endl;
  y = x; // assignment again!
  cout << "The value of y is " << y << endl; // print 1. y has the same value of x now
  y = 100; // y changes again. Does x change?
  cout << "The value of x is " << x << endl; // print 1
  
  cout << "The value of &y is " << &y << endl; // This is the address of y
  cout << "The value of &x is " << &x << endl; // This is the address of x. They are different.
  
  int * p = &x; // p is a pointer to int, whose value is an address. It has the value of the address of x.
  cout << "The value of p is " << p << endl; // Same as the address of x
  cout << "The value of &p is " << &p << endl; // p is also a variable, so it has an address
  
  cout << "The value of *p is " << *p << endl; // *p is the variable which has the address equals to the value of p (which is x)
  *p = 5; // Same as x = 5
  cout << "The value of *p is " << *p << endl;
  cout << "The value of x is " << x << endl; // Both prints 5
  
  p = &y; // assignment to a pointer. 
  cout << "The value of p is " << p << endl; // Now p's value is the address of y
  *p = 6; // Same as y = 6
  cout << "The value of *p is " << *p << endl;
  cout << "The value of y is " << y << endl;
  
  int ** pp = &p; // pointer to pointer! The value of pp is the address of p
  cout << "The value of pp is " << endl; // Same as &p
  *pp = &x; // *pp is p, so p points to x again.
  
  return 0;
}
