#include <iostream>
class Date{
    private:
            // they are privet but thier are setters and getters for them 
        int day;
        int month;
        int year; 
    public:
        Date(int day_, int month_, int year_){
            day = day_;
                // make sure month is in range
            if(month > 12 || month < 1){
                month = 1;
            }else{
                month = month_; 
            }
            year = year_; 
        }
            // getters 
        int getDay(){
            return day;
        }
        int getMonth(){
            return month;
        }
        int getYear(){
            return year;
        }
            // setters 
        void setDay(int newDay){
            day = newDay;
        }
        void setMonth(int newMonth){
            month = newMonth;
        }
        void setYear(int newYear){
            year = newYear;
        }
        // similar to pritty print 
        void displayDate(){
            std::cout << day << "/" << month << "/" << year << std::endl;
        }
};

int main(){
    Date today((int) 1,(int) 2,(int) 3); 
    today.displayDate();

    today.setDay(13);
    today.setMonth(12);
    today.setYear(2023);
    today.displayDate();

    std::cout << today.getDay() << " " << today.getMonth() << " " << today.getYear() << " " << std::endl;
    return 0;
}