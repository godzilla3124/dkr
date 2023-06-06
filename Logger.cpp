#include "Logger.h"

Logger::Logger(std::string fileName) : m_fileName(fileName) {
    m_logFile.open(m_fileName, std::ios::app);
}

Logger::~Logger() {
    if (m_logFile.is_open()) {
        m_logFile.close();
    }
}

void Logger::log(std::string message) {
    if (m_logFile.is_open()) {
        m_logFile << message << std::endl;
    }
}