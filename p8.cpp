#include <iostream>

using namespace std;

class Cricketer
{

public:
    string name;

    Cricketer(string name_)
    {
        name = name_;
    }
};

class Batsman : public Cricketer
{

public:
    int totalRuns;
    int avrg;
    int bestPerformance;
    int matchesPlayed;

    Batsman(string name_, int totalRuns_, int bestPerformance_, int matchesPlayed_)
        : Cricketer(name_)

    {
        totalRuns = totalRuns_;
        bestPerformance = bestPerformance_;
        matchesPlayed = matchesPlayed_;
    }

    int Average()
    {
        if (matchesPlayed != 0)
            return totalRuns / matchesPlayed;
        else
            return 0;
    }

    void show()
    {

        cout << "total Runs " << totalRuns << endl;
        cout << "Average Runs " << Average() << endl;
        cout << "Best Perfomance " << bestPerformance << endl;
    }
};

int main()
{

    Batsman data("Virat", 10000, 500, 50);

    cout << "Player Name " << data.name << endl;

    data.show();

    return 0;
}