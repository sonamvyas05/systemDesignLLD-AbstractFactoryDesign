#ifndef IITMFEECALCULATOR_H
#define IITMFEECALCULATOR_H
#include "FeeCalculator.h"

class IitMFeeCalculator : public FeeCalculator
{  public:
       double calculateFee();
};

#endif