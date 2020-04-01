#pragma once
#include "IFurnitureFactory.h"
#include "ModernChiar.h"
#include "SimpleChiar.h"

#include <vector>

class Ikea : IFurnitureFactory
{
public:

  void createChair(int count);

  void createSofa();

  void createTable();

private:
  std::vector<IChiar*> _chairs;
};
