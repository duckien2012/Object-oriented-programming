#ifndef DATE_H
#define DATE_H

class Date
{
public:
	// get Value
	int getDay()const { return day; }
	int getMonth()const { return month; }
	int getYear()const { return year; }

	// set Value
	void setDay(int d) { day = d; }
	void setMonth(int m) { month = m; }
	void setYear(int y) { year = y; }

private:
	int day, month, year;
};

#endif // !DATE_H
