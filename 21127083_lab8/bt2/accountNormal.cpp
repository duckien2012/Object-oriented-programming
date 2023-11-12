#include"app.h"

accountNormal::accountNormal(string Username, string Password,int c)
	:account(Username, Password) {
	check = c;
}
accountNormal::accountNormal(const accountNormal& acc):account(acc)
{
	check = acc.check;
}
void accountNormal::logIn(account*acc)
{
	account::logIn(acc);
}
void accountNormal::signIn(account* acc)
{
	account::signIn(acc);
}