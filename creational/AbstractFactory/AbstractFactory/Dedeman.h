#pragma once
#include "IFurnitureFactory.h"
#include "SimpleChiar.h"

#include <vector>

class Dedeman : public IFurnitureFactory
{
public:

  void createChair(int count);

  void createSofa();

  void createTable();

private:
  std::vector<IChiarPtr> _chairs;
  std::string type = "simple";
};
