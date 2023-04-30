// AudioPlayer.cpp: определяет точку входа для приложения.
//
#include "AudioPlayer.h"
#include "Player.cpp"


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
	Player player;
	std::cout << "Loading tracks: " << std::endl;
	player.setList();
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
				player.pl();
				break;
			case operation::pause:
				player.pa();
				break;
			case operation::next:
				player.ne();
				break;
			case operation::stop:
				player.st();
				break;
			case operation::ex:

				return 0;

			}
		}


	}


}