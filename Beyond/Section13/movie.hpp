#pragma once
#include <string>

class Movie {
  private:
    std::string name;
    std::string rating;
    short unsigned int watched;
    
  public:
    Movie(std::string n, std::string r, short unsigned int w);
    Movie(const Movie &source);

    void ShowMovie() const;
    void IncrementWatched();

    std::string GetName() const {return name;};
};

