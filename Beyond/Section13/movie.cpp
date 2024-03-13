#include "movie.hpp"
#include <iostream>

Movie::Movie(std::string n, std::string r, short unsigned int w) : name{n}, rating{r}, watched{w} {}

void Movie::ShowMovie() const {
  std::cout << "\nName: " << name << std::endl;
  std::cout << "Rating: " << rating << std::endl;
  std::cout << "Watched " << watched << " times" << std::endl;
}

void Movie::IncrementWatched() {
  watched++;
}

Movie::Movie(const Movie &source) : Movie{source.name, source.rating, source.watched} {}