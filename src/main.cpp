/////////////////////////////////////////////////
// AI Code STARTS ///////////////////////////////
/////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // Required for std::getenv and std::putenv
#include <map>
#include <sstream>

// Function to parse the .env file and load variables
bool loadEnvFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Warning: Could not open .env file: " << filename << std::endl;
        return false;
    }
    
    std::string line;
    while (std::getline(file, line)) {
        // Skip comments and empty lines
        if (line.empty() || line[0] == '#') {
            continue;
        }

        // Find the position of the '=' character
        size_t delimiterPos = line.find('=');
        if (delimiterPos == std::string::npos) {
            continue; // Skip lines without '='
        }

        // Extract key and value
        std::string key = line.substr(0, delimiterPos);
        std::string value = line.substr(delimiterPos + 1);

        // Remove leading/trailing whitespace or quotes from key/value if necessary
        // (basic implementation; advanced parsing might be needed for complex cases)

        // Set the environment variable for the current process
        // Note: The string passed to putenv must remain valid for the program's lifetime
        // as some implementations store a pointer to the string.
        // A common way to handle this is to use a map to store the strings.
        #ifdef _WIN32
        // Use _putenv on Windows
            std::string envVar = key + "=" + value;
            _putenv(envVar.c_str());
        #else
            // Use setenv on Linux/macOS
            // setenv copies the strings, so it's safer
            setenv(key.c_str(), value.c_str(), 1); // Overwrite if exists
        #endif
    }
    return true;
}
    
/////////////////////////////////////////////////
// AI Code ENDS /////////////////////////////////
/////////////////////////////////////////////////

#include <cstdlib>
#include <iostream>
#include "header.hpp"
#include "template.hpp"
int main() {
    if (!loadEnvFile(".env")) {
        std::cout << "failed to load environment variables..." << std::endl;
        return 0;
    }
    std::cout << "Hello World" << std::endl;
    std::cout << "Hello Project" << std::endl;
    std::cout << "nitron::nullIntPointer: " << nitron::nullIntPointer << std::endl;
    if (const char* PASSWORD = std::getenv("PASSWORD")) {
        std::cout << "PASSWORD: " << PASSWORD  << std::endl;
    } else {
        std::cout << "PASSWORD was not found" << std::endl;
    }
    if (const char* NONEXISTING_VARIABLE = std::getenv("NONEXISTING_VARIABLE")) {
        std::cout << "NONEXISTING_VARIABLE: " << NONEXISTING_VARIABLE << std::endl;
    } else {
        std::cout << "NONEXISTING_VARIABLE was not found" << std::endl;
    }
    std::cout << "Bye :D" << std::endl;
    return 0;
}