#include <string>
#include <fstream>

class Logger {
private:
    std::string m_fileName;
    std::ofstream m_logFile;

public:
    Logger(std::string fileName);
    ~Logger();
    void log(std::string message);
};