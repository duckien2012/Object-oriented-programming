#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Skill
{
	string skillName;
	unsigned int skillLevel;
public:
	Skill();
	Skill(string, unsigned int);
	Skill(const Skill&);

	void setName(string);
	void setLevel(unsigned int);

	string getName();
	unsigned int getLevel();

	void input();
	void output();
};
class Hero
{
	string heroName;
	unsigned int heroHealth;
	unsigned int heroMana;
	unsigned int heroLevel;
	vector<Skill*> skillList;
public:
	Hero();
	Hero(string, unsigned int, unsigned int, unsigned int);
	Hero(const Hero&);
	//~Hero() {
	//	for (auto p : skillList)
	//	{
	//		delete p;
	//	}
	//	skillList.clear();
	//}

	void setName(string);
	void setHealth(unsigned int);
	void setMana(unsigned int);
	void setLevel(unsigned int);
	void setSkill(Skill*);
	
	unsigned int getNumOfSkill();
	string getName();
	unsigned int getHealth();
	unsigned int getMana();
	unsigned int getLevel();

	void checkSkillOfHero(Skill*,int n);
	void input();
	void output();
};