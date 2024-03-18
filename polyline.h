#pragma once

class Polyline : public Shape {
    void draw (Canvas& c) override;
protected:
    std::vector<int> pts;
};