#include <vector>
#include "Airplane.h"

class Airline {
private:
    std::string m_name;
    std::vector<Airplane> m_airplanes;

public:
    Airline(std::string name);
    void addAirplane(Airplane airplane);
    int getTotalCapacity();
    int getTotalCargoCapacity();
    void sortAirplanesByFlightRange();
    std::vector<Airplane> findAirplanesByFuelConsumption(int min, int max);
};