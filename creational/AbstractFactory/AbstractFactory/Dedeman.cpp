#include "stdafx.h"

#include"Dedeman.h"

#include <iostream>
#include <iostream>

const float priceSimpleChair = 16.0f;

void Dedeman::createChair(int count)
{
  for (int i = 0; i < count; i++)
  {
    IChiarPtr simpleChiar = std::make_shared<SimpleChiar>();

    // Set the chair id index of for
    simpleChiar->setId(i);
    simpleChiar->setPrice(priceSimpleChair);
    _chairs.push_back(simpleChiar);
  }

  std::cout << "I creaded from Dedeman" << _chairs.size() << std::endl;
}

void Dedeman::createSofa()
{
  std::cout << "Sofa from Dedeman, empty stock" << std::endl;
}

void Dedeman::createTable()
{
  std::cout << "Table from Dedeman, empty stock" << std::endl;
}
