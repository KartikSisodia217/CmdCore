#include<iostream>
#include "Parser.h"
#include "Engine.h"
#include<string>
using namespace std; 


void Engine::run(){
  bool Running = true;
  string input;
  Parser parser;
  while(Running){
    cout<<"CmdCore > ";
    getline(cin, input);
    if(input == "exit"){
      cout<<"Exiting CmdCore"<<endl;
      Running=false;
    }
    else{
      cout<<"unkown command"<<endl;
      ParsedCommand pc = parser.parse(input);

      cout << "COMMAND: " << pc.command << endl;

      for (string arg : pc.args) {
          cout << "Arg: " << arg << endl;
      }
      cout<<endl;
    }
  }
}