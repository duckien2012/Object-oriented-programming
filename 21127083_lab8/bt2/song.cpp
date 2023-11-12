#include"app.h"

song::song()
{
	name = "";
	lyric = "";
	singer = "";
	type = "";
	tCreate = 0;
	listen = 0;
}

song::song(string Name, string Lyric, string Singer, string Type, int TCreate, int Listen)
{
	name = Name;
	lyric = Lyric;
	singer = Singer;
	type = Type;
	tCreate = TCreate;
	listen = Listen;
}

song::song(const song& s)
{
	name = s.name;
	lyric = s.lyric;
	singer = s.singer;
	type = s.type;
	tCreate = s.tCreate;
	listen = s.listen;
}
void song::input(istream& is)
{
	cout << "Enter song's name : ";
	is.ignore();
	getline(is, name);
	cout << "Enter lyric : ";
	getline(is, lyric);
	cout << "Enter name of singer : ";
	getline(is, singer); 
	cout << "Enter type of song : ";
	getline(is, type);
	cout << "Time to create song : ";
	is >> tCreate;
	cout << "The number of listening : ";
	is >> listen;
}
istream& operator >> (istream& is, song& s)
{
	s.input(is);
	return is;
}

void song::output(ostream& os)
{
	os << "Song's name: " << name << endl;
	os << "Lyric : " << lyric << endl;
	os << "Singer : " << singer << endl;
	os << "Type song : " << type << endl;
	os << "Time to create song : " << tCreate << endl;
	os << "The number of listening : " << listen << endl;
}
ostream& operator << (ostream& os, song& s)
{
	s.output(os);
	return os;
}

