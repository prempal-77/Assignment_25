/*Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to set
values for time and display values of time.*/


#include <iostream>

class Time {
public:
    // Constructor
    Time(int hours = 0, int minutes = 0, int seconds = 0) : hours_(hours), minutes_(minutes), seconds_(seconds) {}

    // Setter functions
    void SetHours(int hours) { hours_ = hours; }
    void SetMinutes(int minutes) { minutes_ = minutes; }
    void SetSeconds(int seconds) { seconds_ = seconds; }
    void Set(int hours, int minutes, int seconds) { hours_ = hours; minutes_ = minutes; seconds_ = seconds; }

    // Getter functions
    int Hours() const { return hours_; }
    int Minutes() const { return minutes_; }
    int Seconds() const { return seconds_; }

    // Print function
    void Print() const { std::cout << hours_ << " hr " << minutes_ << " min " << seconds_ << " sec" << std::endl; }

private:
    int hours_;
    int minutes_;
    int seconds_;
};
