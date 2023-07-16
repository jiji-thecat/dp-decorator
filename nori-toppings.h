#ifndef NORITOPPINGS_H
#define NORITOPPINGS_H

#include <ramen.h>

class NoriToppings : public Ramen
{
public:
    NoriToppings(Ramen &ramen);
    NoriToppings(NoriToppings &noriToppings);
    ~NoriToppings();
    QString name();
    QString image();

private:
    Ramen &ramen;
};

#endif // NORITOPPINGS_H
