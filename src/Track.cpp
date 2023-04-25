#include "Track.h"

class Track
{
    std::string name = "";
    std::time_t t = std::time(nullptr);
    std::tm date = *std::localtime(&t);
    int trackDuration = 0;
    /*std::cin >> std::get_time(&in.date, "%d/%m");*/

public:

    std::string getName()
    {
        return name;
    }
    std::tm getDate()
    {
        return date;
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
    void getInfo(Track* track)
    {
        std::cout << "Track name: " << track->name << " , track date: "
            << std::put_time(&track->date, "%d/%m/%y") << " , duration: " << track->trackDuration << std::endl;
    }
};