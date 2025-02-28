/*
###  Test Program for Rainfall class by hard coded data 

*/

#include <iostream>
#include <sstream>
#include "Rainfall.h"

int main() {
   Rainfall rainfallData;

   // Simulated input data
   string inputData = "New York,2023-01-01,5.2\n"
                           "Los Angeles,2023-01-01,7.4\n"
                           "New York,2023-01-02,6.1\n"
                           "Los Angeles,2023-01-02,4.3\n";
   istringstream iss(inputData);
   string city, dateStr, line;
   double rainfall;
   int y, m, d;

   // Read input data
   while (getline(iss, line)) {
       istringstream lineStream(line);
       getline(lineStream, city, ',');
       getline(lineStream, dateStr, ',');
       sscanf(dateStr.c_str(), "%d-%d-%d", &y, &m, &d);
       Date date(y, m, d);
       lineStream >> rainfall;

       rainfallData.addRainfall(city, date, rainfall);
   }

   // Calculate and print average rainfall for each city
   cout << "Average Rainfall for New York: " << rainfallData.calculateAverage("New York") << std::endl;
   cout << "Average Rainfall for Los Angeles: " << rainfallData.calculateAverage("Los Angeles") << std::endl;

   return 0;
}
