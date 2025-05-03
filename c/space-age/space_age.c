#include "space_age.h"
typedef struct {
    const char* name;
    double orbital_period;
} Planet;
const int64_t sidereal_year = 31557600;
float age(planet_t planet, int64_t seconds){
    Planet planets[] = {
        {"Mercury", 0.2408467},
        {"Venus", 0.61519726},
        {"Earth", 1.0},
        {"Mars", 1.8808158},
        {"Jupiter", 11.862615},
        {"Saturn", 29.447498},
        {"Uranus", 84.016846},
        {"Neptune", 164.79132}
    };
    const int num_planets = sizeof(planets) / sizeof(planets[0]);
    if ((int)planet < 0 || (int)planet >= num_planets) {
        return -1.0;
    }
    float sidereal_years = (float)seconds / sidereal_year;
    double planet_orbital_time = planets[(int)planet].orbital_period;
    return sidereal_years / planet_orbital_time;
}
