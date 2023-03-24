#if !defined(TRIANGLE_H)
#define TRIANGLE_H

namespace triangle {

	enum flavor {equilateral, isosceles, scalene};
	flavor kind(double A, double B, double C);


}  // namespace triangle

#endif // TRIANGLE_H
