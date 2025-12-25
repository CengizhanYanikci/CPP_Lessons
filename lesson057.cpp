// ---------------------------
// Trigonometric & Hyperbolic
// ---------------------------

// cos(x)
// Header: <cmath>
// Prototype: double cos(double x);
// Description: Computes the cosine of x (x given in radians).
// Returns a value in the range [-1, +1]. If x is NaN -> returns NaN.
// If x is infinite -> typically returns NaN (domain error).
// Notes: cosine is periodic with period 2*PI. Use std::cosl/std::cosf for long/float variants.
// Example: cos(0.0) == 1.0

// sin(x)
// Header: <cmath>
// Prototype: double sin(double x);
// Description: Computes the sine of x (radians).
// Returns a value in [-1, +1]. sin(NaN) -> NaN. sin(inf) -> NaN.
// Notes: periodic with period 2*PI. sin(x) ~ x for small x.

// tan(x)
// Header: <cmath>
// Prototype: double tan(double x);
// Description: Computes tangent of x (sin(x)/cos(x)). x in radians.
// Domain: where cos(x) != 0. If cos(x) is zero (odd multiples of PI/2) result overflows to +/-inf or NaN.
// tan(NaN) -> NaN.

// acos(x)
// Header: <cmath>
// Prototype: double acos(double x);
// Description: Computes principal value of arc-cosine, result in [0, PI].
// Domain: x must be in [-1, +1]. If |x| > 1 -> returns NaN (domain error).
// Example: acos(1.0) == 0.0

// asin(x)
// Header: <cmath>
// Prototype: double asin(double x);
// Description: Computes principal value of arc-sine, result in [-PI/2, PI/2].
// Domain: x in [-1, +1]. Outside -> NaN.
// Example: asin(0.0) == 0.0

// atan(x)
// Header: <cmath>
// Prototype: double atan(double x);
// Description: Computes principal value of arc-tangent, result in (-PI/2, PI/2).
// Domain: all finite x. atan(inf) -> +PI/2, atan(-inf) -> -PI/2.

// atan2(y, x)
// Header: <cmath>
// Prototype: double atan2(double y, double x);
// Description: Computes arc-tangent of y/x, but uses signs of both arguments to determine the correct quadrant.
// Return range: (-PI, PI]. Handles x == 0 properly to choose correct sign/angle.
// Special: atan2(0,0) is implementation-defined (often returns 0.0 or signed-zero).

// cosh(x)
// Header: <cmath>
// Prototype: double cosh(double x);
// Description: Hyperbolic cosine: (e^x + e^-x)/2.
// Domain: all real x. cosh(x) >= 1 for real x.
// For large |x| may overflow to +inf.

// sinh(x)
// Header: <cmath>
// Prototype: double sinh(double x);
// Description: Hyperbolic sine: (e^x - e^-x)/2.
// Odd function: sinh(-x) == -sinh(x). For large x may overflow.

// tanh(x)
// Header: <cmath>
// Prototype: double tanh(double x);
// Description: Hyperbolic tangent: sinh(x)/cosh(x).
// Range: (-1, 1). tanh(0) == 0. For large positive x -> 1, large negative x -> -1.

// acosh(x)
// Header: <cmath>
// Prototype: double acosh(double x);
// Description: Inverse hyperbolic cosine. Domain: x >= 1 for real results.
// If x < 1 -> NaN. Returns value >= 0.

// asinh(x)
// Header: <cmath>
// Prototype: double asinh(double x);
// Description: Inverse hyperbolic sine. Domain: all real x. asinh(x) behaves like log(x) for large x.

// atanh(x)
// Header: <cmath>
// Prototype: double atanh(double x);
// Description: Inverse hyperbolic tangent. Domain: |x| < 1 for real results.
// If |x| >= 1 -> returns NaN (or +/-inf at exact boundaries depending on implementation).


// ---------------------------------
// Exponential & Logarithmic funcs
// ---------------------------------

// exp(x)
// Header: <cmath>
// Prototype: double exp(double x);
// Description: Computes e^x (natural exponential).
// For large x may overflow to +inf, for large negative x -> underflow to 0.0.
// exp(NaN) -> NaN.

// frexp(value, &exp)
// Header: <cmath>
// Prototype: double frexp(double value, int *exp);
// Description: Decomposes value into normalized fraction and exponent such that
//   value == frexp(value, &exp) * 2^exp
// The returned fraction is in range [0.5, 1) (or 0 for value==0). *exp is set accordingly.
// Useful for inspecting binary exponent/mantissa. frexp(0.0, &e) returns 0.0 and sets e = 0.

// ldexp(value, exp)
// Header: <cmath>
// Prototype: double ldexp(double value, int exp);
// Description: Computes value * 2^exp efficiently. Inverse of frexp (in combination).
// Useful to scale by powers of two without precision loss of multiplication by pow(2,exp).

// log(x)
// Header: <cmath>
// Prototype: double log(double x);
// Description: Natural logarithm (base e). Domain: x > 0 => returns real value.
// log(0) -> -inf, log(negative) -> NaN (domain error).

// log10(x)
// Header: <cmath>
// Prototype: double log10(double x);
// Description: Base-10 logarithm. Same domain constraints as log.

// modf(x, &intpart)
// Header: <cmath>
// Prototype: double modf(double x, double *intpart);
// Description: Breaks x into fractional and integral parts. Stores the integral part in *intpart and returns fractional part.
// The sign of the fractional part matches the sign of x. If x is integral, fractional part is +/-0.0.
// Example: double i; double frac = modf(3.75, &i); // i == 3.0, frac == 0.75

// exp2(x)
// Header: <cmath>
// Prototype: double exp2(double x);
// Description: Computes 2^x. More accurate and sometimes faster than std::pow(2.0, x).

// expm1(x)
// Header: <cmath>
// Prototype: double expm1(double x);
// Description: Computes e^x - 1 with high relative accuracy for small x.
// Useful when x is small (exp(x)-1 may lose precision), e.g. expm1(1e-8) gives accurate small result.

// ilogb(x)
// Header: <cmath>
// Prototype: int ilogb(double x);
// Description: Returns the unbiased exponent (as int) of x in base 2 representation: if x == m * 2^n with normalized m, returns n.
// Special values: behavior for 0, inf, NaN is implementation/standard-specific (special return codes exist).
// Use frexp/scalbn when you need decomposition plus precise control.

// log1p(x)
// Header: <cmath>
// Prototype: double log1p(double x);
// Description: Computes log(1 + x) accurately for small x. Avoids loss of precision when x is tiny.
// Example: for x ~ 1e-8, prefer log1p(x) over log(1.0 + x).

// log2(x)
// Header: <cmath>
// Prototype: double log2(double x);
// Description: Base-2 logarithm. Useful when working directly with binary exponents.

// logb(x)
// Header: <cmath>
// Prototype: double logb(double x);
// Description: Returns the unbiased exponent of x as a floating-point value, similar in intent to ilogb but returning double.
// For normalized x, logb(x) gives the exponent n such that x is in [2^n, 2^(n+1)) (subject to exact definition).
// Use when you want exponent as double rather than int.

// scalbn(x, n)
// Header: <cmath>
// Prototype: double scalbn(double x, int n);
// Description: Efficiently computes x * 2^n (similar to ldexp). Guarantees correct scaling using exponent manipulation rather than naive multiplication.
// scalbln(x, n) is the same but takes a long exponent (long n).

// scalbln(x, n)
// Header: <cmath>
// Prototype: double scalbln(double x, long n);
// Description: Same as scalbn but with a long integer exponent parameter.


// ---------------------------------------
// Power, Rounding and Remainder functions
// ---------------------------------------

// pow(x, y)
// Header: <cmath>
// Prototype: double pow(double x, double y);
// Description: Computes x raised to the power y (x^y).
// Domain notes: If x < 0 and y is non-integer -> result is NaN (complex). pow(0, y) and pow(x, +/-inf) have several special-case rules.
// For integer exponents consider using loops or std::llround for integer types to avoid precision issues.

// sqrt(x)
// Header: <cmath>
// Prototype: double sqrt(double x);
// Description: Principal square root. Domain: x >= 0 for real results. sqrt(negative) -> NaN.

// cbrt(x)
// Header: <cmath>
// Prototype: double cbrt(double x);
// Description: Real cubic root. Works for negative x returning negative result (odd root).

// hypot(x, y)
// Header: <cmath>
// Prototype: double hypot(double x, double y);
// Description: Computes sqrt(x*x + y*y) with reduced overflow/underflow and improved accuracy.
// Use hypot rather than manual sqrt(x*x + y*y) for numerical stability in distance calculations.

// ceil(x)
// Header: <cmath>
// Prototype: double ceil(double x);
// Description: Smallest integral value >= x, returned as double. Example ceil(3.2) == 4.0, ceil(-3.2) == -3.0.

// floor(x)
// Header: <cmath>
// Prototype: double floor(double x);
// Description: Largest integral value <= x. Example floor(3.7) == 3.0, floor(-3.7) == -4.0.

// fmod(x, y)
// Header: <cmath>
// Prototype: double fmod(double x, double y);
// Description: Floating-point remainder of x / y, defined as x - n*y where n = trunc(x/y) (trunc toward zero).
// Result has same sign as x and magnitude < |y|. fmod differs from remainder() in tie-breaking behavior.

// trunc(x)
// Header: <cmath>
// Prototype: double trunc(double x);
// Description: Truncates fractional part toward zero. Equivalent to removing the fractional digits.
// Example: trunc(3.7) == 3.0, trunc(-3.7) == -3.0.

// round(x)
// Header: <cmath>
// Prototype: double round(double x);
// Description: Rounds to nearest integer value, halfway cases away from zero (e.g. round(2.5) == 3.0, round(-2.5) == -3.0).
// Returns result as double.

// lround(x)
// Header: <cmath>
// Prototype: long lround(double x);
// Description: Rounds to nearest integer (same rule as round) and returns type long. If the rounded value is outside the range of long, behavior is implementation-defined / may raise range error.

// rint(x)
// Header: <cmath>
// Prototype: double rint(double x);
// Description: Rounds to integer according to the current floating-point rounding mode (set via <cfenv> / fesetround).
// rint may raise the inexact floating-point exception if the result is not exact.

// nearbyint(x)
// Header: <cmath>
// Prototype: double nearbyint(double x);
// Description: Same rounding as rint (uses current rounding mode) but differs in that it does NOT raise the inexact floating-point exception.
// Use when you want rounding consistent with current mode but without floating-point exceptions.

// remainder(x, y)
// Header: <cmath>
// Prototype: double remainder(double x, double y);
// Description: Computes remainder as defined by IEEE 754 / IEC 60559: r = x - n*y where n is the nearest integer to x/y (ties to even).
// The sign of the result can be positive or negative and magnitude <= |y|/2 typically.
// This differs from fmod which uses truncation to determine the quotient.

// nearbyint(x)  (already above; included here for clarity)
// Header: <cmath>
// Prototype: double nearbyint(double x);
// Description: Rounds according to current rounding mode but suppresses the inexact exception (see rint).

// ---------------------------
// End of math function notes.
// ---------------------------

/*
Usage tips:
 - Include <cmath> in C++ code to use all above functions.
 - Prefer specialized functions for accuracy (expm1/log1p/exp2/log2) when working near edge cases.
 - Be careful with domain errors (e.g. log of non-positive, acos outside [-1,1], pow with negative base & fractional exponent).
 - Use frexp/ldexp/scalbn when you need exact control over binary exponent scaling (avoid repeated multiplies by two).
 - Use hypot for Euclidean distance to avoid overflow/underflow.
 - rint/nearbyint let you rely on the current FP rounding mode (useful in numerical code requiring a specific rounding behavior).
*/
