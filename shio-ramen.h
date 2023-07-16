#ifndef SHIORAMEN_H
#define SHIORAMEN_H

#include <ramen.h>

class ShioRamen : public Ramen
{
public:
    ShioRamen();
    ShioRamen(ShioRamen &ShioRamen);
    ~ShioRamen();
    QString name();
    QString image();
};

#endif // SHIORAMEN_H
