#include"app.h"

void readFileSong(string inputFile, songList &list)
{
	ifstream fi(inputFile);
	int n;
	fi >> n;
	for (int i = 0; i < n; i++)
	{
		string name;
		string lyric;
		string singer;
		string type;
		int create;
		int listen;
		fi.ignore();
		getline(fi, name);
		
		getline(fi, lyric);

		getline(fi, singer);

		getline(fi, type);
		fi >> create;
		fi >> listen;
		string check;
		fi >> check;
		if (atoi(check.c_str()) == 0)
		{
			song* s = new songPublic(name, lyric, singer, type, create, listen, 0);
			list.appendSong(s);
		}
		else
		{
			float money;
			fi >> money;
			song* s = new songCopyRight(name, lyric, singer, type, create, listen, 1,money);
			list.appendSong(s);
		}
	}
	fi.close();
}
void readFileAccount(string inputFile, accountList& list)
{
	ifstream fi(inputFile);
	while (!fi.eof())
	{
		string check;
		string username;
		string password;
		fi >> check;
		fi.ignore();
		getline(fi, username);
		getline(fi, password);
		if (check == "0")
		{
			account* a = new accountNormal(username, password,0);
			list.appendAccount(a);
		}
		else
		{
			int time;
			fi >> time;
			account* temp = new accountVip(username, password, time,1);
		}
	}
	fi.close();
}
int main()
{
	
	songList list;
	readFileSong("songList.txt", list);
	cout << list;
	list.printTop5();

	//account* temp = new accountNormal;
	//temp->logIn(temp);
	//cout << temp->getUsername();
	//cout << temp->getPassword();
	//accountList acc;
	//readFileAccount("accountList.txt", acc);
	//cout << acc;
	return 0;

}