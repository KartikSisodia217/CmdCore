  #include "Parser.h"
#include <sstream>

ParsedCommand Parser::parse(const string& input) {
    ParsedCommand result;

    stringstream ss(input);

    ss >> result.command;

    string arg;
    while (ss >> arg) {
        result.args.push_back(arg);
    }

    return result;
}
