#include "../include/common.h"

void super_split(const std::string& s, std::vector<std::string>& v, const std::string& c) {
    std::string::size_type pos1, pos2;
    size_t len = s.length();
    pos2 = s.find(c);
    pos1 = 0;
    while (std::string::npos != pos2)
    {
        v.emplace_back(s.substr(pos1, pos2 - pos1));
        pos1 = pos2 + c.size();
    }
    if (pos1 != len) {
        v.emplace_back(s.substr(pos1));
    }
}

std::string escapeString(std::string inputString) {
    std::string outputString = "";
    for (int i = 0; i < inputString.size(); ++i) {
        switch (inputString[i]) {
            case '\"': {
                outputString += "\\\"";
                break;
            }
            case '\'': {
                outputString += "\\\'";
                break;
            }
            case '\\': {
                outputString += "\\\\";
                break;
            }
            case '\n': {
                outputString += "\\n";
                break;
            }
            case '\t': {
                outputString += "\\t";
                break;
            }
            // If the character doesn't need to be escaped, simply copy it to output string.
            default: {
                outputString += inputString[i];
                break;
            }
        }
    }
    return outputString;
}