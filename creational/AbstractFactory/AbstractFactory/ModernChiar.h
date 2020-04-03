#include "IChiar.h"

class ModernChiar: public IChiar
{
public:
  bool hasLegs();

  float getPrice();

  void setId(int id);
  int getId();

  void setPrice(float price);

private:
  int _id = 0;
  float _price = 0.0f;
};
