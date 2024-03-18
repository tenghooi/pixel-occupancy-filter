#include "utils.h"

namespace pixofil
{
    double logit(double& probability) 
    {
        return std::log(probability / (1 - probability));
    }
}