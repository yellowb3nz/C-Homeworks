#include "func.hpp"

namespace sd
// Форматирование времени
{
    void FormatedTime(char string[], char newform[], size_t lenght) {
        time_t t = std::time(nullptr);
        std::strftime(string, lenght, newform, std::localtime(&t));

        string[4] = '.'; // годы
        string[7] = '.'; // месяцы
        string[13] = ':'; // секунды
        string[16] = ':'; // миллисекунды
        string[19] = '\n'; // новая строка
        string[20] = '\0'; // конец строки в текстовом файле
    }

    // Счётчик строк
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
