#ifndef STRING_UTILS_UTILS_H
#define STRING_UTILS_UTILS_H

#include <string>

namespace String {
    bool startsWith(const std::string &string, const std::string &prefix);
    bool endsWith(const std::string &string, const std::string &suffix);

    int toInt(std::string &numberString);
}

#endif //STRING_UTILS_UTILS_H
