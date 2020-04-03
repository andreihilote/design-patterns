#include "stdafx.h"

#include "ModernChiar.h"

bool ModernChiar::hasLegs()
{
  return false;
}

float ModernChiar::getPrice()
{
  return _price;
}

void ModernChiar::setId(int id)
{
  _id = id;
}

int ModernChiar::getId()
{
  return _id;
}

void ModernChiar::setPrice(float price)
{
  _price = price;
}
