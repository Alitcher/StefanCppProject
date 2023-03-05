#include "Circle2.h"

# define M_PI 3.14159265358979323846 

Circle2::Circle2() : p1(), r(0) {}
Circle2::Circle2(Point2 np1, float rad) : p1(np1), r(rad < 0 ? 0 : rad) {}

float Circle2::circumference() const {
    return 2 * M_PI * r;
}

float Circle2::area() const {
    return M_PI * r * r;
}

bool Circle2::contains(Point2 p) const {
    return p1.distanceFrom(p) <= r;
}

bool Circle2::contains(Line2 l) const {
    return l.p1.distanceFrom(l.p2) <= r;
}

//alt way of calling contain
bool Circle2::operator<= (Line2 l) {
    return l.p1.distanceFrom(l.p2) <= r;
}

bool Circle2::operator<= (Point2 p) {
    return p1.distanceFrom(p) <= r;
}

void Circle2::scale(float factor) {
    if (factor < 0) {
        std::cerr << "Error: factor must be non-negative." << std::endl;
        return;
    }
    r *= factor;
}

// Overload the output stream operator for Circle2
std::ostream& operator<<(std::ostream& os, const Circle2& circle) {
    os << "circle at center point(" << circle.p1.getX() << ", " << circle.p1.getY() << "), rad:" << circle.r << std::endl;
    return os;
}