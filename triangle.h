#include "shape.h"
#include "vector"

class Triangle : public Shape {
    void draw (Canvas& c) override;
protected:
    std::vector<int> pts;
};