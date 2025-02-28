/*
###  Test Program for Rainfall class by reading data from standard input (stdin) also known as the console
*/

#include <iostream>
#include <sstream>
#include "Rainfall.h"
using namespace std;

int main() {
   Rainfall rainfallData;

   string city, dateStr, line;
   double rainfall;
   int y, m, d;

   // Read input data
   while (getline(cin,line)) {
       istringstream lineStream(line);
       getline(lineStream, city, ',');
       getline(lineStream, dateStr, ',');
       sscanf(dateStr.c_str(), "%d-%d-%d", &y, &m, &d);
       Date date(y, m, d);
       lineStream >> rainfall;

       rainfallData.addRainfall(city, date, rainfall);
   }

   // display all data
	 rainfallData.dumpData(); 
   // Calculate and print average rainfall for each city
   cout << "Average Rainfall for New York: " << rainfallData.calculateAverage("New York") << std::endl;
   cout << "Average Rainfall for Los Angeles: " << rainfallData.calculateAverage("Los Angeles") << std::endl;

   return 0;
}
