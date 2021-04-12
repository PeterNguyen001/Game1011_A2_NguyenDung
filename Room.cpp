#include "Room.h"

Room1::Room1()
{
	roomNum = 0;
	description = "";
}

void Room1::Enter()
{
    cout << "You wake up inside dark dungeon, in fornt of you are 4 doors, you decide to open door (enter 1-4): ";
    cin >> description;
    roomNum = stoi(description);
    room1.open(description + ".txt", ios::in);

    if (room1.is_open())
    {
        string tp;
        while (getline(room1, tp)) {
            cout << tp << endl;
        }
        room1.close();
    }

    string choice;
    if (roomNum == 1)
    {
        cin >> choice;
        if (choice == "blue")
        {
            cout << "You wake up on your bed thinking waht a wierd dream it was and you carry on abother day as a professor at Geogre Brown ";
        }
        else if (choice == "red")
        {
            cout << "you swallow the red bill, after ta while you feel something wierd inside you, something uncormtable slowy turn to\nagonizing pain, you died a painfull death ";
        }
    }

    if (roomNum == 2)
    {
        cin >> choice;
        if (choice == "prisoner")
        {
            cout << "Later on, you start an adventure as an Stormcloak rebel, fighting the Imperial then you take an arrow in the knee and you advennture is done. ";
        }
        else if (choice == "red")
        {
            cout << "Later on, you start an adventure as an Imperial soilder, fighting the rebels then you take an arrow in the knee and you advennture is done. ";
        }
    }
 
    if (roomNum == 3)
    {
        cin >> choice;
        if (choice == "kill")
        {
            cout << "You try to kill the other men but he overpowered you and he kill you instead ";
        }
        else if (choice == "saw")
        {
            cout << "You saw off you leg then you bled out to death ";
        }
    }
}
