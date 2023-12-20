#include "Iit.h"

AdmitCard* getAdmitCard(string course) const
{
    switch(course)
      case "math":
           return new IitBAdmitCard();
      case "cs":
            return new IitMAdmitCard();
}
FeeCalculator* getFeeCalculator(string course) const
{
    switch(course)
      case "math":
           return new IitBFeeCalculator();
      case "cs":
            return new IitMFeeCalculator();

}