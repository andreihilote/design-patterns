#pragma once
#include <memory>

class IFurnitureFactory;
typedef std::shared_ptr<IFurnitureFactory> IFactoryPtr;

class IFurnitureFactory
{
  // Data members of class
public:
  virtual ~IFurnitureFactory() {}

  virtual void createChair(int count) = 0;
  virtual void createSofa() = 0;
  virtual void createTable() = 0;
};
