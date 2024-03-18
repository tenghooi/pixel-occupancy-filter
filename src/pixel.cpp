#include "pixel.h"

namespace pixofil
{
    Pixel::Pixel(bool occupancy, double log_odds) 
        : occupancy_ {occupancy}, log_odds_ {log_odds} { }

    Pixel::~Pixel() { }

    bool Pixel::get_occupancy()
    {
        return occupancy_;
    }

    void Pixel::set_occupancy(bool occupancy_val)
    {
        occupancy_ = occupancy_val;
    }
    
    double Pixel::get_log_odds()
    {
        return log_odds_;
    }

    void Pixel::set_log_odds(double log_odds_val)
    {
        log_odds_ = log_odds_val;
    }
    

} // namespace pixofil

