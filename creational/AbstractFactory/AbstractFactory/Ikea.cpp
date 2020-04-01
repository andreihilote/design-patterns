#include "stdafx.h"

#include"Ikea.h"

#include <iostream>

const float priceModernChair = 300.0f;

void Ikea::createChair(int count)
{
  ModernChiar modernChiar;
  modernChiar.setPrice(priceModernChair);

  for (int i = 0; i < count; i++)
  {
    // Set the chair id index of for
    modernChiar.setId(i);
    _chairs.push_back(&modernChiar);
  }

  std::cout << "Chair from Ikea";
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
