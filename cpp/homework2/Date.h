//Date Class definition

#include <iostream>

class Date {
    public: //public class members
        Date(int newDay, int newMonth, int newYear) 
        : day(newDay), month(newMonth), year(newYear) //constructory
        {}
        //setters for Date class
        void setDay(int newDay) {
            day = newDay;
        }
        void setMonth(int newMonth) {
            month = newMonth;
        }
        void setYear(int newYear) {
            year = newYear;
        }

        //getters for Date class
        int getDay() const {
            return day;
        }

        int getMonth() const {
            return month;
        }

        int getYear() const {
            return year;
        }

        //display function for Date class
        void displayDate() const {
            printf("Date: %02d/%02d/%04d\n", month, day, year);
        }
    private: //private class members
        int day;
        int month;
        int year;
};