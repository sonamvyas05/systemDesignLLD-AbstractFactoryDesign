#ifndef IITBFEECALCULATOR_H
#define IITBFEECALCULATOR_H
#include "FeeCalculator.h"

class IitBFeeCalculator : public FeeCalculator
{  public:
      double calculateFee();
};

#endif // IITBFEECALCULATOR_H