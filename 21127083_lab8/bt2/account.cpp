#include"app.h"

account::account()
{
	username = "";
	password = "";
}
account::account(string Username, string Password)
{
	username = username;
	password = password;
}
account::account(const account& acc)
{
	username = acc.username;
	password = acc.password;
	list = acc.list;
}
void account::logIn(account*acc)
{
	do{
	cout << "Enter username ( not space ) : ";
	cin >> acc->username;
		cout << "Enter password (max 8 characters) : ";
		cin >>acc->password;
	} while (acc->password.size() > 8 || acc->password.size() == 0);
}
void account::signIn(account* acc)
{
	do {
		cout << "Enter username (not space) : ";
		cin >> acc->username;
		cout << "Enter password (max 8 characters) : ";
		cin >> acc->password;
	} while (acc->password.size() > 8 || acc->password.size() == 0);
}