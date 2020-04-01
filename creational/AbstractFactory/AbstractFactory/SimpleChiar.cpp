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

void SimpleChiar::setPrice(float price)
{
  _price = price;
}

std::string SimpleChiar::getReviewFromClients()
{
  return "It's pretty uncomfortable";
}

std::string SimpleChiar::getWarrantyCertificate()
{
  return "2 years warranty";
}
