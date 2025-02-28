/*
### Step 2: Redefine the `Rainfall` Class to Use Vectors

need a place to hold each rainfall record - let's use struct
*/
#include <vector>
#include <string>
#include <iostream>
#include "Date.h"
using namespace std;

struct RainfallRecord {
   string city;
   Date date;
   double rainfall;

   RainfallRecord(string c, Date d, double r) : city(c), date(d), rainfall(r) {}
};

class Rainfall {
// vector of RainfallRecord
   vector<RainfallRecord> records;

public:
// method to add rainfall data
   void addRainfall(const string& city, const Date& date, double rainfall) {
       records.emplace_back(city, date, rainfall);
   }

// method to calculate average rainfall for a city
   double calculateAverage(const std::string& city) {
       double totalRainfall = 0.0;
       int count = 0;

       for (const auto& record : records) {
           if (record.city == city) {
               totalRainfall += record.rainfall;
               ++count;
           }
       }

       return count > 0 ? totalRainfall / count : 0.0;
   }
	 // method to dump all data - useful in testing
	 void dumpData() {
		 for (const auto& record : records) {
			 record.date.display();
			 cout << " " << record.city << " " << record.rainfall << endl; 
		 }
	 }
};
