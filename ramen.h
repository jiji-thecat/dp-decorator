#ifndef RAMEN_H
#define RAMEN_H

#include "QString"

class Ramen
{
public:
    Ramen();
    Ramen(Ramen &ramen);
    ~Ramen();
    virtual QString name() = 0;
    virtual QString image() = 0;
};

#endif // RAMEN_H
