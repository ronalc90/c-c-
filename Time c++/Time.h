#include <iostream>
#include <string>
using namespace std;

class Time
{
    private:
        int hour;
        int minutes;
        int seconds;
 
    public:
        Time(int h, int m, int s)
        {
            setHour(h);
            setMinute(m);
            setSecond(s);
        }
 
        void setHour(int h)
        {
            hour = (h>=0 && h<24) ? h : 0;
        }
 
        void setMinute(int m)
        {
            minutes = (m>=0 && m<60) ? m : 0;
        }
 
        void setSecond(int s)
        {
            seconds = (s>=0 && s<60) ? s : 0;
        }
 
        int getHour()
        {
            return hour;
        }
 
        int getMinute()
        {
            return minutes;
        }
 
        int getSecond()
        {
            return seconds;
        }
 
        Time operator+(Time T)
        {
            int h,m,s;
            s = seconds + T.seconds;
            m = minutes + T.minutes + (s/60);
            h = hour + T.hour + (m/60);
            return Time(h%24,m%60,s%60);
        }
 
        Time operator-(Time T)
        {
            int h,m,s;
            s = seconds - T.seconds;
            m = minutes - T.minutes + (s/60);
            h = hour - T.hour + (m/60);
            return Time(h%24,m%60,s%60);
        }
 
        Time operator*(int n)
        {
            int h,m,s;
            s = seconds * n;
            m = minutes * n + (s/60);
            h = hour * n + (m/60);
            return Time(h%24,m%60,s%60);
        }
 
        Time operator/(int n)
        {
            int h,m,s;
            s = seconds / n;
            m = minutes / n + (s/60);
            h = hour / n + (m/60);
            return Time(h%24,m%60,s%60);
        }
 
        bool operator==(Time T)
        {
            return (hour == T.hour) && (minutes == T.minutes) && (seconds == T.seconds);
        }
 
        bool operator<(Time T)
        {
            return (hour < T.hour) || (hour == T.hour && minutes < T.minutes) || (hour == T.hour && minutes == T.minutes && seconds < T.seconds);
        }
 
        bool operator>(Time T)
        {
            return (hour > T.hour) || (hour == T.hour && minutes > T.minutes) || (hour == T.hour && minutes == T.minutes && seconds > T.seconds);
        }
 
        void printTime(int sp)
        {
        	cout<<"La hora es:"<<endl;
            cout << hour << ":";
            for(int i=0;i<sp-2;i++)
                cout << " ";
            cout << minutes << ":";
            for(int i=0;i<sp-2;i++)
                cout << " ";
            cout << seconds << endl;
        }
        
        void printTimeP()
        {
        	cout<<"La hora es:"<<endl;
            cout << hour << ":";
            cout << minutes << ":";
            cout << seconds << endl;
        }
};
