#include "utils.h"

namespace String {
    bool startsWith(const std::string &string, const std::string &prefix) {
        if (string.length() < prefix.length()) {
            return false;
        }

        return std::equal(prefix.begin(), prefix.end(), string.begin());
    }

    bool endsWith(const std::string &string, const std::string &suffix) {
        if (string.length() < suffix.length()) {
            return false;
        }

        return std::equal(suffix.rbegin(), suffix.rend(), string.rbegin());
    }

    int toInt(std::string &numberString) {
        int value;
        std::string::size_type first_after_number;

        try {
            value = std::stoi(numberString, &first_after_number);
        } catch (std::invalid_argument &ex) {
            throw std::invalid_argument(numberString + " is not a number");
        } catch (std::out_of_range &ex) {
            throw std::out_of_range(numberString + " is out of range");
        }

        if (first_after_number != numberString.length()) {
            throw std::invalid_argument(numberString + " is not a number");
        }

        return value;
    }
}