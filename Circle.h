#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
    private:
        float radius;

    public:
        // Default constructor
        Circle();

        // Overloaded constructor
        Circle(float r);

        // Destructor
        ~Circle();

        // Accessor methods
        void setRadius(float r);
        float getRadius() const;
    };
}

#endif