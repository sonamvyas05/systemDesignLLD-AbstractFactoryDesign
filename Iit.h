#ifndef IIT_H
#define IIT_H
#include "UniversityFactory.h"
#include "AdmitCard.h"
#include "FeeCalculater.h"

class Iit :: public UniversityFactory
{
     public:
         AdmitCard* getAdmitCard(string course) const;
         FeeCalculator* getFeeCalculator(string course) const
};

#endif // IIT_H