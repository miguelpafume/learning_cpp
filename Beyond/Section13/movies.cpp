#include "movies.hpp"
#include <iostream>

void Movies::AddMovie(std::string name, std::string rating, short unsigned int watched) {
  for(Movie const &movie: movie_list) {
    if (movie.GetName() == name) {
      std::cout << "\n" << name << " already exists.\n";
      return;
    }
  }

  Movie temp {name, rating, watched}; 
  movie_list.push_back(temp);
  std::cout << "\n" << name << " added.\n";
}

void Movies::ShowMovieList() {
  if(movie_list.size() == 0) {
    std::cout << "\nSorry, no movies to display.\n";
    return;
  }

  std::cout << "\n-=-=-=-=-=-=-=-=-=-=" << std::endl;
  for(Movie const &movie: movie_list) {
    movie.ShowMovie();
  }
  std::cout << "\n-=-=-=-=-=-=-=-=-=-=" << std::endl;
}

void Movies::IncrementWatched(std::string name) {
  for(Movie &movie: movie_list) {
    if (movie.GetName() == name) {
      movie.IncrementWatched();
      std::cout << "\nWatch count for " << name << " increased.\n";
      return;
    }
  }

  std::cout << "\n" << name << " movie not found.\n";
}