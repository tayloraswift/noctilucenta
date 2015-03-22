#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ostream>
#include <math.h>
#include <string>
#include <cstring>
#include <sstream>
#include <sys/stat.h>
#include <vector>
#include <algorithm>

using namespace std;

string line;

int main () 
{

fstream fontfile;
  fontfile.open ("SWIFTDAY Regular.sfd");

    while ( getline (fontfile,line) )
    {
	if (line == "StartChar: u1D433") {
			cout << line << "\n";
    		while ( getline (fontfile,line) ) {
			cout << line << "\n";
			if (line == "EndChar") {
				break;
			}
   		}
	}
    }

return(0);
}
