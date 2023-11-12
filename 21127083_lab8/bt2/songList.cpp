#include"app.h"

songList::~songList()
{
	for (auto& i : list)
		delete i;
}
void songList::appendSong(song* s)
{
	if (s == NULL)return;
	list.push_back(s);
}
void songList::insertionSortRt() {
	song* temp;
	int t;
	for (int i = 1; i < list.size(); i++) {
		temp = list[i];
		t = i - 1;
		while ((t >= 0) && (list[t]->getListen() < temp->getListen())) {
			list[t + 1] = list[t];
			t--;
		}
		list[t + 1] = temp;
	}
}
void songList::printTop5()
{
	sort(list.begin(), list.end());
	int cnt;
	if (list.size() <= 5) cnt = list.size();
	else cnt = 5;
	insertionSortRt();
	cout << "Top 5 song having most listen : " << endl;
	for (int i = 0; i < cnt; i++)
	{
		cout << *list[i] << endl;
	}
}
istream& operator >> (istream& is,songList& listSong)
{
	int n;
	cout << "Enter the number of song: ";
	cin >> n;
	char c;
	for (int i = 0; i < n; i++)
	{
		cout << "The song " << i + 1 << " : " << endl;
		do {
			cout << "Is the song copyright ? " << endl;
			cout << "true - enter y " << endl;
			cout << "false - enter n" << endl;
			cin >> c;
		} while (c != 'y' && c != 'n');

		if (c == 'y')
		{
			song* temp = new songCopyRight;
			is >> *temp;
			listSong.list.push_back(temp);
		}
		else 
		{
			song* temp = new songPublic;
			is >> *temp;
			listSong.list.push_back(temp);
		}
	}
	return is;
}

ostream& operator << (ostream& os, songList& songList)
{
	os << "The number of song : " << songList.list.size() << endl;
	for (int i = 0; i< songList.list.size(); i++)
	{
		os << "Song " << i + 1 << " : " << endl;
		os << *songList.list[i] << endl;
	}
	return os;
}

