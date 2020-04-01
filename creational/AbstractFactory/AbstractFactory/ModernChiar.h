#include "IChiar.h"

class ModernChiar: public IChiar
{
public:
  bool hasLegs();

  float getPrice();
  void setId(int id);
  void setPrice(float price);

  std::string getReviewFromClients();
  std::string getWarrantyCertificate();

private:
  int _id = 0;
  float _price = 0.0f;
};
