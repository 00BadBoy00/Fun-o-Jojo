#include <iostream>
#include <string>

int main(int argc, char * argv){ 
	std::string cmd = "java -Xms4096M -Xmx4096M -jar spigot-1.14.4.jar";	
	system(cmd.c_str());
	return 0;
}