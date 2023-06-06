// Airplane.cpp
#include "Airplane.h"
#include <sstream>

Airplane::Airplane(std::string model, int capacity, int cargoCapacity, int flightRange, int fuelConsumption)
    : m_model(model), m_capacity(capacity), m_cargoCapacity(cargoCapacity), m_flightRange(flightRange), m_fuelConsumption(fuelConsumption) {}

std::string Airplane::getModel() const {
    return m_model;
}

void Airplane::setModel(const std::string& model) {
    m_model = model;
}

int Airplane::getCapacity() const {
    return m_capacity;
}

void Airplane::setCapacity(int capacity) {
    m_capacity = capacity;
}

int Airplane::getCargoCapacity() const {
    return m_cargoCapacity;
}

void Airplane::setCargoCapacity(int cargoCapacity) {
    m_cargoCapacity = cargoCapacity;
}

int Airplane::getFlightRange() const {
    return m_flightRange;
}

void Airplane::setFlightRange(int flightRange) {
    m_flightRange = flightRange;
}

int Airplane::getFuelConsumption() const {
    return m_fuelConsumption;
}

void Airplane::setFuelConsumption(int fuelConsumption) {
    m_fuelConsumption = fuelConsumption;
}

std::string Airplane::toString() const {
    std::stringstream ss;
    ss << "Model: " << m_model << ", Capacity: " << m_capacity << ", Cargo Capacity: " << m_cargoCapacity
        << ", Flight Range: " << m_flightRange << ", Fuel Consumption: " << m_fuelConsumption;
    return ss.str();
}

std::ostream& operator<<(std::ostream& os, const Airplane& airplane) {
    os << airplane.toString();
    return os;
}