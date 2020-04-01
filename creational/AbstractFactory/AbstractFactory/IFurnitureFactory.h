#pragma once
// An abstract class
class IFurnitureFactory
{
  // Data members of class
public:
  virtual void createChair(int count) = 0;
  virtual void createSofa() = 0;
  virtual void createTable() = 0;
};
