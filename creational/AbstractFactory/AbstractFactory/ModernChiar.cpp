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

void ModernChiar::setPrice(float price)
{
  _price = price;
}

std::string ModernChiar::getReviewFromClients()
{
  return "So good ! I am happy";
}

std::string ModernChiar::getWarrantyCertificate()
{
  return "1 years warranty";
}
