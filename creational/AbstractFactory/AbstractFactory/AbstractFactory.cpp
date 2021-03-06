
#include "stdafx.h"

#include "Ikea.h"
#include "Dedeman.h"
#include "MobExpert.h"

#include "IFurnitureFactory.h"

int main()
{
  //Ikea make modern furniture.
  IFactoryPtr ikea = std::make_shared<Ikea>();

  // Crete 20 chairs from ikea.
  ikea->createChair(20);

  //Ikea make simple furniture.
  IFactoryPtr dedeman = std::make_shared<Dedeman>();
  dedeman->createChair(10);
  dedeman->createSofa();
  dedeman->createTable();

  IFactoryPtr mobExpert = std::make_shared<MobExpert>();
  mobExpert->createChair(3);
  mobExpert->createSofa();
  mobExpert->createTable();

  return 0;
}
