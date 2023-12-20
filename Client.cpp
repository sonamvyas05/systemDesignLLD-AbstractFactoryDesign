
#include<string.h>


#include "UniversityFactory.h"

int main()
{
    int scoreCard1 = 125;
    UniversityFactory university;
    UniversityFactory* universityName1 = university.getUnivercity(scoreCard1);
    std:: cout<< "UnivercityAdmitCard: " << university->getAdmitCard("math") << std::endl;
    std :: cout<< "UnivercityFee: " << university->getFeeStructure() << std:: endl;
}
