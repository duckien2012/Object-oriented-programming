#include "file2.h"

Skill::Skill()
{
	skillName = "unknown";
	skillLevel = 0;
}
Skill::Skill(string name, unsigned int level)
{
	skillName = name;
	skillLevel = level;
}
Skill::Skill(const Skill& sk)
{
	skillName = sk.skillName;
	skillLevel = sk.skillLevel;
}
void Skill::setName(string name)
{
	skillName = name;
}
void Skill::setLevel(unsigned int level)
{
	skillLevel = level;
}
string Skill::getName()
{
	return this->skillName;
}
unsigned int Skill::getLevel()
{
	return this->skillLevel;
}

void Skill::input()
{
	string nameSkill;
	unsigned int levelSkill;
	cout << "Nhap thong tin skill " << endl;
	cout << "Nhap ten skill : " << endl;
	cin.ignore();
	getline(cin, nameSkill);
	cout << "Nhap level cua skill : " << endl;
	cin >> levelSkill;
	setName(nameSkill);
	setLevel(levelSkill);
}

void Skill::output()
{
	cout << "Skill  : " << skillName << " " << skillLevel << endl;
}
Hero::Hero()
{
	heroName = "unknown";
	heroHealth = 0;
	heroMana = 0;
	heroLevel = 0;

}
Hero::Hero(string name, unsigned int health, unsigned int mana, unsigned int level)
{
	heroName = name;
	heroHealth = health;
	heroMana = mana;
	heroLevel = level;
}
Hero::Hero(const Hero& h)
{
	heroName = h.heroName;
	heroHealth = h.heroHealth;
	heroMana = h.heroMana;
	heroLevel = h.heroLevel;
}

void Hero::setName(string name)
{
	heroName = name;
}
void Hero::setHealth(unsigned int health)
{
	heroHealth = health;
}
void Hero::setMana(unsigned int mana)
{
	heroMana = mana;
}
void Hero::setLevel(unsigned int level)
{
	heroLevel = level;
}

void Hero::setSkill(Skill *s)
{
	skillList.push_back(s);
}
string Hero::getName()
{
	return this->heroName;
}
unsigned int Hero::getHealth()
{
	return this->heroHealth;
}
unsigned int Hero::getMana()
{
	return this->heroMana;
}
unsigned int Hero::getLevel()
{
	return this->heroLevel;
}
unsigned int Hero::getNumOfSkill()
{
	return this->skillList.size();
}
void Hero::input()
{
	string nameHero;
	unsigned int health, mana, level;
	
	cout << "Nhap thong tin hero " << endl;
	cout << "Nhap ten hero : " << endl;
	cin.ignore();
	getline(cin, heroName);
	cout << "Nhap health : " << endl;
	cin >> health;
	cout << "Nhap mana : " << endl;
	cin >> mana;
	cout << "Nhap level : " << endl;
	cin >> level;

	//setName(nameHero);
	setHealth(health);
	setMana(mana);
	setLevel(level);
	
}

void Hero::output()
{
	cout << "Ten : " << heroName << endl;
	cout << "Health : " << heroHealth << endl;
	cout << "Mana : " << heroMana << endl;
	cout << "Level : " << heroLevel << endl;
	cout << "Skill : " << endl;
	for (int i = 0; i < skillList.size(); i++)
	{
		skillList[i]->output();
	}
}
void Hero::checkSkillOfHero(Skill *s,int n)
{
	for (int i = 0; i < n; i++)
	{
		unsigned int x = s[i].getLevel();
		if (x == heroLevel)
			setSkill(s+i);
	}
}