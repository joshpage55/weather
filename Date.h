/*
### Step 1: Define the `Date` Class

This class will simply hold a date. For simplicity, we will use the format `YYYY-MM-DD`.
We do NOT need a defaul constructor since we will always know the date from the input.
We also can assume all dates are valid, based on the source of our test data.
*/

class Date {
public:
// define data attributes
    int year, month, day;

// define a constructor
    Date(int y, int m, int d) : year(y), month(m), day(d) {}

// define a display method to show date YYYY-MM-DD format
    void display() const {
        printf("%04d-%02d-%02d", year, month, day);
    }
};
