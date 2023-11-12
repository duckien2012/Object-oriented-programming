#include"app.h"

songCopyRight::songCopyRight():song()
{
	check = 1;
	money = 0.99;
}

songCopyRight::songCopyRight(string Name, string Lyric, string Singer, string Type, int TCreate, int Listen, int Check, float Money)
	:song(Name,Lyric,Singer,Type,TCreate,Listen)
{
	check = Check;
	money = Money;
}

songCopyRight::songCopyRight(const songCopyRight& s):song(s)
{
	check = s.check;
	money = s.money;
}
void songCopyRight::input(istream& is)
{
	song::input(is);
	cout << "Enter money of copyRight : ";
	is >> money;
}
istream& operator >> (istream& is, songCopyRight& s)
{
	s.input(is);
	return is;
}

void songCopyRight::output(ostream& os)
{
	song::output(os);
	os << "Money of copyRight: " << money << endl;
	os << "Check : " << check << endl;
}
ostream& operator << (ostream& os, songCopyRight& s)
{
	s.output(os);
	return os;
}

