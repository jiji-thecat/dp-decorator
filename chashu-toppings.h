#ifndef CHASHUTOPPINGS_H
#define CHASHUTOPPINGS_H

#include <ramen.h>

class ChashuToppings : public Ramen
{
public:
    ChashuToppings(Ramen &ramen);
    ChashuToppings(ChashuToppings &ChashuToppings);
    ~ChashuToppings();
    QString name();
    QString image();

private:
    Ramen &ramen;
};

#endif // CHASHUTOPPINGS_H
