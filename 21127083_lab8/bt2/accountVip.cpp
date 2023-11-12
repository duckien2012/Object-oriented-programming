#include"app.h"

accountVip::accountVip(string Username, string Password,int time,int c)
	:account(Username, Password) {
	timeMaintain = time;
	check = c;
}
accountVip::accountVip(const accountVip& acc) :account(acc)
{
	timeMaintain = acc.timeMaintain;
	check = acc.check;
}
void accountVip::logIn(account* acc)
{
	account::logIn(acc);
}
void accountVip::signIn(account* acc)
{
	account::signIn(acc);
}