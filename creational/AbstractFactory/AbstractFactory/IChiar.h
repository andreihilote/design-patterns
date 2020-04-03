#pragma once
#include <iostream>

#include <memory>

class IChiar;
typedef std::shared_ptr<IChiar> IChiarPtr;

class IChiar
{
public:
  virtual ~IChiar() {}

  virtual bool hasLegs() = 0;

  virtual void setId(int id) = 0;
  virtual int getId() = 0;

  virtual float getPrice() = 0;
  virtual void setPrice(float price) = 0;
};
