#include <iostream>
#include "Airplane.h"
#include "Airline.h"
#include "Logger.h"

int main() {
    Logger logger("log.txt");

    Airplane airplane1("Boeing 747", 416, 112760, 13430, 10500);
    Airplane airplane2("Airbus A380", 853, 152400, 15200, 12000);
    Airplane airplane3("Boeing 777", 396, 103600, 15540, 7500);

    logger.log("Airplanes created");

    Airline airline("Awesome Airline");
    airline.addAirplane(airplane1);
    airline.addAirplane(airplane2);
    airline.addAirplane(airplane3);

    logger.log("Airplanes added to the airline");

    std::cout << "Total capacity: " << airline.getTotalCapacity() << std::endl;
    std::cout << "Total cargo capacity: " << airline.getTotalCargoCapacity() << std::endl;

    logger.log("Total capacity and cargo capacity calculated");

    airline.sortAirplanesByFlightRange();

    logger.log("Airplanes sorted by flight range");

    std::cout << "Airplanes with fuel consumption between 7000 and 11000:" << std::endl;
    auto airplanes = airline.findAirplanesByFuelConsumption(7000, 11000);
    for (const auto& airplane : airplanes) {
        std::cout << airplane << std::endl;
    }

    logger.log("Airplanes with specific fuel consumption found");

    std::ofstream file("airplanes.txt");
    if (file.is_open()) {
        for (const Airplane& airplane : airplanes) {
            std::string line = airplane.toString();
            // Просте XOR шифрування
            for (char& c : line) {
                c ^= 123;
            }
            file << line << std::endl;
        }
        file.close();
    }

    return 0;
}