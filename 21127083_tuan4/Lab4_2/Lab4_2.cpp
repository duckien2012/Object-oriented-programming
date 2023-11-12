#include "file2.h"

int main()
{
	int numSkill;
	Skill* s;
	Hero a;
	cout << "The number of skill : " << endl;
	cin >> numSkill;
	s = new Skill[numSkill];
	for (int i = 0; i < numSkill; i++)
	{
		s[i].input();
	}
	for (int i = 0; i < numSkill; i++)
	{
		s[i].output();
	}

	a.input();
	a.checkSkillOfHero(s,numSkill);
	cout << "INFO OF HERO " << endl;
	a.output();

	delete[]s;
}