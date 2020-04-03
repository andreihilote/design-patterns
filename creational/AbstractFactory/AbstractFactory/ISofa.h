#pragma once
#include <iostream>

class ISofa
{
public:

  virtual ~ISofa() {}

  virtual float getDimensions() = 0;
  virtual float getPrice() = 0;
  virtual std::string getReviewFromClients() = 0;
  virtual std::string getColor() = 0;
};
