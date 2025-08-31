#include <iostream>
using namespace std;

int main(){
    // x starts as decimal 7.
    // In binary (lowest 4 bits shown for clarity):
    // 7 = 0111
    int x = 7;

    // "&=" is the *bitwise AND assignment* operator.
    //   x &= 9;  is exactly the same as  x = x & 9;
    //
    // Bitwise AND compares each bit position and sets the result bit to 1
    // only if BOTH corresponding bits are 1.
    //
    // We are doing 0111 & 1001:
    //
    //     0111   (7)
    // AND 1001   (9)
    //   = 0001   (1 in decimal)
    //
    // So x becomes 1.
    x &= 9;

    cout << x << endl; // prints 1

    //--------------------------------------------------------------------

    // y starts as decimal 7.
    // Binary (lowest 4 bits shown):
    // 7 = 0111
    int y = 7;

    // "|=" is the *bitwise OR assignment* operator.
    //   y |= 9;  is exactly the same as  y = y | 9;
    //
    // Bitwise OR compares each bit position and sets the result bit to 1
    // if *either* corresponding bit is 1 (or both).
    //
    // We are doing 0111 | 1001:
    //
    //     0111   (7)
    //  OR 1001   (9)
    //   = 1111   (15 in decimal)
    //
    // So y becomes 15.
    y |= 9;

    cout << y << endl; // prints 15

    //-------------------------------------------------------------------------------------------

    // z starts as decimal 7.
    // Binary (lowest 4 bits shown):
    // 7 = 0111
    int z = 7;

    // "^=" is the *bitwise XOR (exclusive OR) assignment* operator.
    //   z ^= 9;  is exactly the same as  z = z ^ 9;
    //
    // Bitwise XOR compares each bit position and sets the result bit to 1
    // only if the corresponding bits are different (one is 1 and the other is 0).
    //
    // We are doing 0111 ^ 1001:
    //
    //     0111   (7)
    // XOR 1001   (9)
    //   = 1110   (14 in decimal)
    //
    // So z becomes 14.
    z ^= 9;

    cout << z << endl; // prints 14

     // ------------------- RIGHT SHIFT -------------------
    // b starts as decimal 7.
    // Binary (showing lowest 4 bits for clarity): 7 = 0111
    int b = 7;

    // ">>=" is the *bitwise right-shift assignment* operator.
    //   b >>= 1;  is exactly the same as  b = b >> 1;
    //
    // What a right shift does:
    //  - It moves every bit to the right by the given count.
    //  - Bits that move past the right edge are discarded.
    //  - The vacant high-order bits (on the left) are filled:
    //      * For unsigned integers: zeros are shifted in (logical right shift).
    //      * For signed integers and negative values: behavior is implementation-defined
    //        (many implementations perform an arithmetic shift that copies the sign bit,
    //         but the standard does not guarantee this for negative values).
    //
    // For positive integers (like 7) the result is predictable: shifting right by 1
    // is equivalent to integer division by 2 (floor), shifting by 2 divides by 4, etc.
    //
    // Example A: shift by 1
    //     0111   (7)
    // >>1  0011   (3)  -> decimal 3
    b >>= 1;
    cout << "b >>= 1 result: " << b << endl; // prints 3

    // Reset b to 7 for the next example
    b = 7;

    // Example B: shift by 2
    //     0111   (7)
    // >>2  0001   (1)  -> decimal 1
    b >>= 2;
    cout << "b >>= 2 result: " << b << endl; // prints 1

 // ------------------- LEFT SHIFT -------------------
    // k starts as decimal 7.
    // Binary (lowest 4 bits shown for clarity): 7 = 0111
    int k = 7;

    // "<<=" is the *bitwise left-shift assignment* operator.
    //   k <<= 1;  is exactly the same as  k = k << 1;
    //
    // What a left shift does:
    //  - It moves every bit to the left by the given count.
    //  - Bits that move past the left edge are discarded (lost).
    //  - The vacant rightmost bits are filled with zeros.
    //
    // For positive integers, left shift by n is equivalent to multiplying by 2^n
    // (as long as the result does not overflow the range of the type).
    //
    // Example A: shift by 1
    //     0111   (7)
    // <<1 1110   (14 in decimal)
    k <<= 1;
    cout << "k <<= 1 result: " << k << endl; // prints 14

    // Reset k to 7 for the next example
    k = 7;

    // Example B: shift by 2
    //     0111   (7)
    // <<2 1100   (12 in decimal)
    k <<= 2;
    cout << "k <<= 2 result: " << k << endl; // prints 28

    // --------------------------------------------------------
    return 0;
}
