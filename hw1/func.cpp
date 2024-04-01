#include "func.hpp"

namespace sd
{
    void FormatedTime(char string[], char newform[], size_t lenght) {
        time_t t = std::time(nullptr);
        std::strftime(string, lenght, newform, std::localtime(&t));

        string[4] = '.'; //year
        string[7] = '.'; //month
        string[13] = ':'; //sec
        string[16] = ':'; //mil sec
        string[19] = '\n'; // new line
        string[20] = '\0'; // end of the line
    }

    int Lines(const char& file_name)
    {
        std::ifstream in(&file_name);
        int count = 0;
        std::string tmp;

        while (!in.eof()) {
            std::getline(in, tmp);
            count++;
        }
        return count;
    }
}