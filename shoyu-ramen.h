#ifndef SHOYURAMEN_H
#define SHOYURAMEN_H

#include <ramen.h>

class ShoyuRamen : public Ramen
{
public:
    ShoyuRamen();
    ShoyuRamen(ShoyuRamen &shoyuRamen);
    ~ShoyuRamen();
    QString name();
    QString image();
};

#endif // SHOYURAMEN_H
