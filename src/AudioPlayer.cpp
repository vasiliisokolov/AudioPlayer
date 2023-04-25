// AudioPlayer.cpp: определяет точку входа для приложения.
//
#include "AudioPlayer.h"


enum operation
{
	play = 0,
	pause = 1,
	next = 2,
	stop = 3,
	ex = 4
};

int main()
{
	int op;
	std::cout << "Audio Player." << std::endl;
	Pleer* pleer = new Player{};
	std::cout << "Loading tracks: " << std::endl;
	for (int i = 0; i < 5; i++)
	{

	}
	while (true)
	{
		std::cout << "Choose the operation: ";
		std::cin >> op;
		if (op > 4 || op < 0)
		{
			std::cerr << "Error! Wrong operation! Try again!" << std::endl;
		}
		else
		{
			switch (op)
			{
			case operation::play:

				break;
			case operation::pause:

				break;
			case operation::next:

				break;
			case operation::stop:

				break;
			case operation::ex:
				//delete Pleer::playList;
				return 0;

			}
		}


	}


}
