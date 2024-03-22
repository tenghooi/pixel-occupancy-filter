#ifndef _PIXEL_H_
#define _PIXEL_H_

#include <iostream>
#include <string>
#include <vector>

namespace pixofil 
{
    class Pixel
    {
    private:

        bool occupancy_;
        double log_odds_;

// logit(p_1:t) = logit(p_t) + log(p_1:t-1) - log(p)

    public:

        Pixel(bool occupancy = false, double log_odds = 0.0);
        Pixel(const Pixel& pix);
        ~Pixel();

        bool get_occupancy() const;
        void set_occupancy(bool occupancy_val);

        double get_log_odds() const;
        void set_log_odds(double log_odds_val);

    };

}

#endif