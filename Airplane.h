// Airplane.h
#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <string>

class Airplane {
private:
    std::string m_model;
    int m_capacity;
    int m_cargoCapacity;
    int m_flightRange;
    int m_fuelConsumption;

public:
    Airplane(std::string model, int capacity, int cargoCapacity, int flightRange, int fuelConsumption);
    std::string getModel() const;
    void setModel(const std::string& model);
    int getCapacity() const;
    void setCapacity(int capacity);
    int getCargoCapacity() const;
    void setCargoCapacity(int cargoCapacity);
    int getFlightRange() const;
    void setFlightRange(int flightRange);
    int getFuelConsumption() const;
    void setFuelConsumption(int fuelConsumption);
    std::string toString() const;
    friend std::ostream& operator<<(std::ostream& os, const Airplane& airplane);
};

#endif // AIRPLANE_H