// MathLibrary.h - Contains declarations of math functions
#pragma once
#include <stdio.h>
#include <math.h>

//#ifdef MATHLIBRARY_EXPORTS
//#define COUNTSHAPE_API __declspec(dllexport)
//#else
//#define COUNTSHAPE_API __declspec(dllimport)
//#endif

// The Fibonacci recurrence relation describes a sequence F
// where F(n) is { n = 0, a
//               { n = 1, b
//               { n > 1, F(n-2) + F(n-1)
// for some initial integral values a and b.
// If the sequence is initialized F(0) = 1, F(1) = 1,
// then this relation produces the well-known Fibonacci
// sequence: 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

// Initialize a Fibonacci relation sequence
// such that F(0) = a, F(1) = b.
// This function must be called before any other function.
//extern "C" COUNTSHAPE_API void isValidTriangle(
//    const unsigned double double catetA, const unsigned double double catetB, const unsigned double double catetC);
//
//// Produce the next value in the sequence.
//// Returns true on success and updates current value and index;
//// false on overflow, leaves current value and index unchanged.
//extern "C" COUNTSHAPE_API void triangleType();
//
//// Get the current value in the sequence.
//extern "C" COUNTSHAPE_API unsigned long long circleArea();
//
//// Get the position of the current value in the sequence.
//extern "C" COUNTSHAPE_API void isValidParam();

extern "C"
{
	__declspec(dllexport) void isValidTriangle(double catetA, double catetB, double catetC)
	{
		if (catetA <= 0 || catetB <= 0 || catetC <= 0) {
			printf("Invalid parameters");
		}
	}

    __declspec(dllexport) void triangleType(double catetA, double catetB, double catetC)
    {
        isValidTriangle(catetA, catetB, catetC);
        double areaResult;

        if (catetA == catetB && catetB == catetC)
        {
            areaResult = sqrt(3) / 4 * catetA * catetA;
            printf("O triângulo é equilátero. Area: %.2f", areaResult);
        }
        else if (catetA == catetB && catetA == catetC && catetB != catetA && catetB != catetC)
        {
            double prm = (catetA + catetB + catetC) / 2;
            areaResult = sqrt(prm * (prm - catetA) * (prm - catetA) * (prm - catetC));
            printf("O triângulo é isósceles. Area: %.2f", areaResult);
        }
        else
        {
            double prm = (catetA + catetB + catetC) / 2;
            areaResult = sqrt(prm * (prm - catetA) * (prm - catetB) * (prm - catetC));
            printf("O triângulo é escaleno. Area: %.2f", areaResult);
        }
    }

    //Circle
    __declspec(dllexport) float circleArea(float radius) {
        return 3.14 * (radius * radius);
    }

    __declspec(dllexport) void isValidParam(float radius) {
        if (radius <= 0) {
            printf("Invalid radius");
        }
    }
}

//extern "C"
//{
//	
//}