
class Date{
private: 
    int month;
    int day;
    int year;
public: 
    Date();
    Date(int month, int day, int year);
    void daysInMonth();
    void getDay(int day);
    void getMonth(int month);
    void getYear();
    void nextDay(int day, int year, int month);
    void toString(int month, int day, int year);

};