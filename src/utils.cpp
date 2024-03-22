#include "utils.h"

namespace pixofil
{
    double logit(const double& probability) 
    {
        return std::log(probability / (1 - probability));
    }

    void log_odds_update(Pixel& pixel, double new_log_odds)
    {
        double log_odds {pixel.get_log_odds()};

        log_odds = log_odds + new_log_odds;

        pixel.set_log_odds(log_odds);
    }
}