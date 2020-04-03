#include "IChiar.h"

class SimpleChiar : public IChiar
{
public:
  bool hasLegs();

  float getPrice();

  int getId();
  void setId(int id);

  void setPrice(float price);

private:
  int _id = 0;
  float _price = 0.0f;
};
