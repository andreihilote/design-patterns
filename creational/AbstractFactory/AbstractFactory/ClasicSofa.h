#pragma once
#include "ISofa.h"

class ClasicSofa : ISofa
{
public:
  float getDimensions();
  float getPrice();
  std::string getReviewFromClients();
  std::string getColor();
};
