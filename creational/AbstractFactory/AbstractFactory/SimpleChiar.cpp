#include "stdafx.h"

#include "SimpleChiar.h"

bool SimpleChiar::hasLegs()
{
  return true;
}

float SimpleChiar::getPrice()
{
  return 30.0f;
}

int SimpleChiar::getId()
{
  return _id;
}

void SimpleChiar::setId(int id)
{
  _id = id;
}

void SimpleChiar::setPrice(float price)
{
  _price = price;
}
