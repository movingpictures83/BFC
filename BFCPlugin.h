#ifndef BFCPLUGIN_H
#define BFCPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "Tool.h"
#include <string>

class BFCPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "BFC";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
