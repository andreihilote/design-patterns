#include "IChiar.h"

class SimpleChiar : public IChiar
{
public:
  bool hasLegs();

  float getPrice();
  void setPrice(float price);

  std::string getReviewFromClients();
  std::string getWarrantyCertificate();

private:
  float _price = 0.0f;
};
