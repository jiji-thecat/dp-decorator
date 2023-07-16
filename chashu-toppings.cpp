#include "chashu-toppings.h"

ChashuToppings::ChashuToppings(Ramen &ramen) : ramen(ramen)
{

}

ChashuToppings::ChashuToppings(ChashuToppings &ChashuToppings) : ramen(ChashuToppings.ramen)
{

}

ChashuToppings::~ChashuToppings()
{

}

QString ChashuToppings::name(){
    return "Chashu " + ramen.name();
}

QString ChashuToppings::image(){
    return ramen.image() +  ",chashu.png";
}
