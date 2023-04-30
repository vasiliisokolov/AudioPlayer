#include "Player.h"
#include "Track.cpp"

class Player
{
	Track playList[8]{};
	bool play = false;
	bool pause = false;
	Track current;

public:
	void setList()
	{

		for (int i = 0; i < 8; i++)
		{
			std::string name;
			int dur;
			std::cout << "Enter Track's name: ";
			std::cin >> name;
			playList[i].setName(name);
			std::cout << "Enter Day of creation(d/m/y): ";
			std::time_t t = std::time(nullptr);
			std::tm date = *std::localtime(&t);
			std::cin >> std::get_time(&date, "%d/%m/%y");
			playList[i].setDate(date);
			std::cout << "Enter Track's duration: ";
			std::cin >> dur;
			playList[i].setDuration(dur);

			//delete track;
		}
	}

	void pl()
	{
		if (!play && !pause)
		{
			std::string name;
			std::cout << "Enter track's name: ";
			std::cin >> name;
			for (int i = 0; i < 8; i++)
			{
				if (playList[i].getName() == name)
				{
					std::cout << "Track name: " << playList[i].getName() << std::endl;
					playList[i].getDate();
					std::cout << "Duration: " << playList[i].getDuration() << std::endl;
					current = playList[i];
				}
			}
			play = true;

		}
		else if (pause)
		{
			std::cout << "Pause off!" << std::endl;
			std::cout << "Track name: " << current.getName() << std::endl;
			current.getDate();
			std::cout << "Duration: " << current.getDuration() << std::endl;

			pause = false;
		}

	}

	void pa()
	{
		if (!pause)
		{
			std::cout << "Pause on!" << std::endl;
			pause = true;
		}
	}

	void ne()
	{
		int nextTrack = rand() % 8;
		std::cout << "Track name: " << playList[nextTrack].getName() << std::endl;
		playList[nextTrack].getDate();
		std::cout << "Duration: " << playList[nextTrack].getDuration() << std::endl;
		current = playList[nextTrack];
		play = true;
		pause = false;
	}

	void st()
	{
		if (play)
		{
			std::cout << "Stop!" << std::endl;
			play = false;
			pause = false;
		}
	}


};