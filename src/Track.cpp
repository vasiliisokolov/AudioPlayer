#include "Track.h"

class Track
{
	std::string name = " ";
	std::time_t t = std::time(nullptr);
	std::tm date = *std::localtime(&t);
	int trackDuration = 0;
	/*std::cin >> std::get_time(&in.date, "%d/%m");*/

public:

	std::string getName()
	{
		return name;
	}
	void getDate()
	{
		std::cout << std::put_time(&date, "%d/%m/%y") << std::endl;
	}
	int getDuration()
	{
		return trackDuration;
	}
	void setName(std::string& newName)
	{
		name = newName;
	}
	void setDate(std::tm& newDate)
	{
		date = newDate;
	}
	void setDuration(int& newDuration)
	{
		trackDuration = newDuration;
	}

};