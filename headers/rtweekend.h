#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <cstdlib>
#include <limits>
#include <memory>


// Usings

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

// Constants

const float infinity = std::numeric_limits<float>::infinity();
const float pi = 3.1415926535897932385;

// Utility Functions

inline float degrees_to_radians(float degrees) {
    return degrees * pi / 180.0;
}

inline float clamp(float x, float min, float max) {
    if (x < min) return min;
    if (x > max) return max;
    return x;
}

inline float random_float() {
    //returns real [0,1)
    return rand() / (RAND_MAX + 1.0);
}

inline float random_float(float min, float max) {
    //returns real [min,max)
    return min + (max-min)*random_float();
}

// Common Headers

#include "ray.h"
#include "vec3.h"

#endif
