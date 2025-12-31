#ifndef PARSER_H
#define PARSER_H

#include <string>
#include <vector>

using namespace std;

struct ParsedCommand {
    string command;
    vector<string> args;
};

class Parser {
public:
    ParsedCommand parse(const string&    input);
};

#endif
