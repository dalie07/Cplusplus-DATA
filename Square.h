#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class Square {
    private:
        float sideLength;

    public:
        // Default constructor
        Square();

        // Overloaded constructor
        Square(float side);

        // Destructor
        ~Square();

        // Accessor methods
        void setSideLength(float side);
        float getSideLength() const;
    };
}

#endif