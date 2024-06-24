#include "scoremanager.h"
#include <fstream>
#include <stdexcept>

ScoreManager::ScoreManager()
{
    scores['X'] = 0;
    scores['O'] = 0;
}

void ScoreManager::incrementScore(char player)
{
    if (scores.find(player) != scores.end()) {
        scores[player]++;
    }
}

int ScoreManager::getScore(char player) const
{
    auto it = scores.find(player);
    if (it != scores.end()) {
        return it->second;
    }
    return 0;
}

void ScoreManager::saveScores(const std::string &filename) const
{
    std::ofstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Failed to open file for writing");
    }
    file << "X " << scores.at('X') << "\n";
    file << "O " << scores.at('O') << "\n";
}

void ScoreManager::loadScores(const std::string &filename)
{
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Failed to open file for reading");
    }
    char player;
    int score;
    while (file >> player >> score) {
        scores[player] = score;
    }
}
