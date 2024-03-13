#pragma once
#include "movie.hpp"
#include <vector>
#include <string>

class Movies {
  private:
    std::vector<Movie> movie_list;

  public:
    void AddMovie(std::string name, std::string rating, short unsigned int watched);
    void ShowMovieList();
    void IncrementWatched(std::string name);

};