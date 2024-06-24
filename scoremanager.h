#ifndef SCOREMANAGER_H
#define SCOREMANAGER_H

#include <map>
#include <string>

class ScoreManager
{
public:
    ScoreManager();
    void incrementScore(char player);
    int getScore(char player) const;
    void saveScores(const std::string &filename) const;
    void loadScores(const std::string &filename);

private:
    std::map<char, int> scores;
};

#endif // SCOREMANAGER_H
