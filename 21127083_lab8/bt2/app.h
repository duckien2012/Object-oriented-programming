#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include<algorithm>
#include<fstream>
#include<cstring>
using namespace std;


//song
class song {
private:
	string name;
	string lyric;
	string singer;
	string type;
	int tCreate;
	int listen;
	friend istream& operator >> (istream&, song&);
	friend ostream& operator << (ostream& os, song&);
public:
	song();
	song(string, string, string, string, int, int);
	song(const song&);
	~song(){}
	int getListen() { return this->listen; }
	virtual void input(istream&);
	virtual void output(ostream&);

};
class songPublic :public song {
private:
	int check;
	friend istream& operator >> (istream&, songPublic&);
	friend ostream& operator << (ostream& os, songPublic&);
public:
	songPublic() :song() { check = 0; };
	songPublic(string, string, string, string, int, int,int);
	songPublic(const songPublic&);
	~songPublic() {}
	virtual void input(istream&);
	virtual void output(ostream&);
};
class songCopyRight :public song {
private:
	int check;
	float money;
	friend istream& operator >> (istream&, songCopyRight&);
	friend ostream& operator << (ostream& os, songCopyRight&);
public:
	songCopyRight();
	songCopyRight(string, string, string, string, int, int,int, float);
	songCopyRight(const songCopyRight&);
	~songCopyRight() {}
	virtual void input(istream&);
	virtual void output(ostream&);
};

class songList {
private: 
	vector<song*> list;
	friend istream& operator >>(istream&, songList&);
	friend ostream& operator <<(ostream&, songList&);
public:
	songList() {};
	~songList();

	void appendSong(song*);
	void insertionSortRt();
	void printTop5();

};

// taikhoan

class account {
private:
	string username;
	string password;
	vector<song*>list;
public:
	account();
	account(string,string);
	account(const account&);
	~account() {};

	void setUsername(string name) { username = name; }
	void setPassword(string pass) { password = pass; }
	string getUsername() { return this->username; }
	string getPassword() { return this->password; }
	virtual void logIn(account*);
	virtual void signIn(account*);
};

class accountNormal :public account
{
private:
	int check;
public:
	accountNormal() :account() { check = 0; }
	accountNormal(string, string,int);
	accountNormal(const accountNormal&);
	~accountNormal() {};
	void logIn(account*);
	void signIn(account*);
};

class accountVip :public account {
private:
	int timeMaintain;
	int check;
public:
	accountVip() :account() { timeMaintain = 0; check = 1; }
	accountVip(string, string,int,int);
	accountVip(const accountVip&);
	~accountVip() {};	
	void logIn(account*);
	void signIn(account*);
};

class accountList {
private:
	vector<account*>list;
	friend istream& operator >> (istream&, accountList&);
	friend ostream& operator << (ostream&, accountList&);
public:
	accountList(){}
	~accountList() {
		for (auto& i : list)
			delete i;
	}
	void appendAccount(account*);
};