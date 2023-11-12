
#include"app.h"

void accountList::appendAccount(account* s)
{
	if (s == NULL)return;
	list.push_back(s);
}

ostream& operator << (ostream& os, accountList& list)
{
	os << "The number of account : " << list.list.size() << endl;
	for (int i = 0; i < list.list.size(); i++)
	{
		os << "Song " << i + 1 << " : " << endl;
		os << list.list[i]->getUsername() << endl;
	}
	return os;
}