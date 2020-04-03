#pragma once
#include "IFurnitureFactory.h"

class MobExpert : public IFurnitureFactory
{
public:
  void createChair(int count);

  void createSofa();

  void createTable();
};
