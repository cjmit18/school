#include <string>
#ifndef PLAYER_H
#define PLAYER_H

class Player {
    private:
        std::string job;
        int level;
    public:
        Player(const std::string& job = "Knight", int level = 0) : job(job), level(level) {}
        std::string getJob() const {
            return job;
        }
        int getLevel() const {
            return level;
        }
       void setJob(const std::string& newJob) {
            job = newJob;
        }
        void setLevel(int newLevel) {
            level = newLevel;
        }

};
#endif