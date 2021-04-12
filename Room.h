#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Room1
{
private:
	fstream room1;
	int roomNum;
	string description;
	
public:
	Room1();
	~Room1()= default;
	Room1(int num, string des);
	void Enter();
};

