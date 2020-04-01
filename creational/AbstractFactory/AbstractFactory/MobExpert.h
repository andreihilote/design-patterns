#pragma once
#include "IFurnitureFactory.h"

class MobExpert : IFurnitureFactory
{
public:
  void createChair();

  void createSofa();

  void createTable();
};
