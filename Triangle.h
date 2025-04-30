#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
    class Triangle {
    private:
        float base;
        float height;

    public:
        // Default constructor
        Triangle();

        // Overloaded constructor
        Triangle(float b, float h);

        // Destructor
        ~Triangle();

        // Accessor methods
        void setBase(float b);
        void setHeight(float h);
        float getBase() const;
        float getHeight() const;
    };
}

#endif