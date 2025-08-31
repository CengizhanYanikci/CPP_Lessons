#include <iostream>
using namespace std;

int main() {
    //-----------------------------------------
    // Comparison Operators
    // == : equal to
    // != : not equal to
    // <  : less than
    // >  : greater than
    // <= : less than or equal to
    // >= : greater than or equal to

    int a = 5, b = 10;
    cout << (a == b) << endl; // False => 0
    cout << (a != b) << endl; // True => 1
    cout << (a < b) << endl;  // True => 1
    cout << (a > b) << endl;  // False => 0
    cout << (a <= 5) << endl; // True => 1
    cout << (b >= 10) << endl;// True => 1

    //-----------------------------------------
    // Arithmetic Operators
    // +  : addition
    // -  : subtraction
    // *  : multiplication
    // /  : division
    // %  : modulus

    int x = 15, y = 4;
    cout << (x + y) << endl; // 19
    cout << (x - y) << endl; // 11
    cout << (x * y) << endl; // 60
    cout << (x / y) << endl; // 3
    cout << (x % y) << endl; // 3

    //-----------------------------------------
    // Logical Operators
    // && : logical AND
    // || : logical OR
    // !  : logical NOT

    bool p = true, q = false;
    cout << (p && q) << endl; // False => 0
    cout << (p || q) << endl; // True => 1
    cout << (!p) << endl;     // False => 0
    cout << (!(p==true && q==true)) <<endl; //True => 1

    //-----------------------------------------
    // Assignment Operators
    // =   : simple assignment
    // +=  : addition assignment
    // -=  : subtraction assignment
    // *=  : multiplication assignment
    // /=  : division assignment
    // %=  : modulus assignment

    int m = 7;
    m += 3; 
    cout << m << endl; // 10
    m -= 2; 
    cout << m << endl; // 8
    m *= 2; 
    cout << m << endl; // 16
    m /= 4; 
    cout << m << endl; // 4
    m %= 3; 
    cout << m << endl; // 1

    //-----------------------------------------
    // Increment & Decrement Operators
    // ++ : increment by 1
    // -- : decrement by 1

    int n = 5;
    n++;
    cout << n << endl; // 6
    n--;
    cout << n-- << endl; // 5
    cout << n << endl; // 4

    //-----------------------------------------
    // Bitwise Operators
    // &  : bitwise AND
    // |  : bitwise OR
    // ^  : bitwise XOR
    // ~  : bitwise NOT
    // << : left shift
    // >> : right shift

    int u = 5;  // 0101 in binary
    int v = 3;  // 0011 in binary
    cout << (u & v) << endl; // 1  => 0101 & 0011 = 0001
    cout << (u | v) << endl; // 7  => 0101 | 0011 = 0111
    cout << (u ^ v) << endl; // 6  => 0101 ^ 0011 = 0110
    cout << (~u) << endl;    // -6 => bitwise NOT
    cout << (u << 1) << endl;// 10 => 0101 << 1 = 1010
    cout << (u >> 1) << endl;// 2  => 0101 >> 1 = 0010

    return 0;
}
