#ifndef UNIVERSITYfACTORY_H
#define UNIVERSITYfACTORY_H

#include "Iit.h"
#include "Nit.h"
#include "AdmitCard.h"
#include "FeeCalculater.h"


class UniversityFactory{
private:
    int cutoff = 120;
public:
    UniversityFactory* getUniversity(scoreCard)
    {
        if(scoreCard > cutoff)
        {
            return new Iit();
        }
        else
        {
            return new Nit();
        }
    }

    virtual AdmitCard* getAdmitCard(string course) const = 0;
    virtual FeeCalculator* getFeeCalculator(string course) const = 0;
    
};



#endif // UNIVERSITYfACTORY_H