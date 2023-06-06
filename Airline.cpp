#include "Airline.h"
#include <algorithm>

Airline::Airline(std::string name) : m_name(name) {}

void Airline::addAirplane(Airplane airplane) {
    m_airplanes.push_back(airplane);
}

int Airline::getTotalCapacity() {
    int totalCapacity = 0;
    for (auto& airplane : m_airplanes) {
        totalCapacity += airplane.getCapacity();
    }
    return totalCapacity;
}

int Airline::getTotalCargoCapacity() {
    int totalCargoCapacity = 0;
        for (auto& airplane : m_airplanes) {
            totalCargoCapacity += airplane.getCargoCapacity();
        }
    return totalCargoCapacity;
}

void Airline::sortAirplanesByFlightRange() {
    std::sort(m_airplanes.begin(), m_airplanes.end(), [](Airplane& a, Airplane& b) {
        return a.getFlightRange() < b.getFlightRange();
        });
}

std::vector<Airplane> Airline::findAirplanesByFuelConsumption(int min, int max) {
    std::vector<Airplane> result;
    for (auto& airplane : m_airplanes) {
        if (airplane.getFuelConsumption() >= min && airplane.getFuelConsumption() <= max) {
            result.push_back(airplane);
        }
    }
    return result;
}