#include "nori-toppings.h"

NoriToppings::NoriToppings(Ramen &ramen) : ramen(ramen)
{

}

NoriToppings::NoriToppings(NoriToppings &noriToppings) : ramen(noriToppings.ramen)
{

}

NoriToppings::~NoriToppings()
{

}

QString NoriToppings::name(){
    return "Nori " + ramen.name();
}

QString NoriToppings::image(){
    return ramen.image() +  ",nori.png";
}
