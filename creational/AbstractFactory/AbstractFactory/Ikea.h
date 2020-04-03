#pragma once
#include "IFurnitureFactory.h"
#include "ModernChiar.h"

#include <vector>

class Ikea : public IFurnitureFactory
{
public:

  void createChair(int count);

  void createSofa();

  void createTable();

private:
  void displayChairs();

  std::vector<IChiarPtr> _chairs;
};
