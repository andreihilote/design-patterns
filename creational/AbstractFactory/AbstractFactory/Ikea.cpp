#include "stdafx.h"

#include"Ikea.h"

#include <iostream>

const float priceModernChair = 300.0f;

void Ikea::createChair(int count)
{
  for (int i = 0; i < count; i++)
  {
    IChiarPtr modernChiar = std::make_shared<ModernChiar>();

    // Set the chair id index of for
    modernChiar->setId(i);
    modernChiar->setPrice(priceModernChair);
    _chairs.push_back(modernChiar);
  }

  std::cout << "Chair from Ikea" << std::endl;

  // Display the chairs created for testing.
  displayChairs();
}

void Ikea::createSofa()
{
  std::cout << "Empty Stock";
  std::cout << "Sofa from Ikea";
}

void Ikea::createTable()
{
  std::cout << "Empty Stock";
  std::cout << "Table from Ikea";
}

void Ikea::displayChairs()
{
  for (auto &chair : _chairs)
  {
    std::cout << chair->getPrice() << " " << chair->getId() << std::endl;
  }
}
