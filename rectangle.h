//
// Created by anova on 3/8/2024.
//

#pragma once

class Rectangle : public Shape {
    void draw(Canvas& c) override;

protected:
    std::vector<int> pts;
};