#pragma once
#include <iostream>

class IChiar
{
public:
  virtual bool hasLegs() = 0;

  virtual void setId(int id) = 0;
  virtual float getPrice() = 0;
  virtual void setPrice(float price) = 0;

  virtual std::string getReviewFromClients() = 0;
  virtual std::string getWarrantyCertificate() = 0;
};
