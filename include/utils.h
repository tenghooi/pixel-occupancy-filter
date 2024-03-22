#ifndef _UTILS_H_
#define _UTILS_H_

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

#include "pixel.h"
namespace pixofil
{
    double logit(const double& probability);
    void log_odds_update(Pixel& pixel, double new_log_odds);
}

#endif