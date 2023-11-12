#include "app.h"

songPublic::songPublic(string Name, string Lyric, string Singer, string Type, int TCreate, int Listen,int Check)
	:song(Name, Lyric, Singer, Type, TCreate, Listen)
{
	check = Check;
}

songPublic::songPublic(const songPublic& s) :song(s)
{
	check = s.check;
}
void songPublic::input(istream& is)
{
	song::input(is);
}
istream& operator >> (istream& is, songPublic& s)
{
	s.input(is);
	return is;
}

void songPublic::output(ostream& os)
{
	song::output(os);
	os << "Check : " << check << endl;
}
ostream& operator << (ostream& os, songPublic& s)
{
	s.output(os);
	return os;
}

