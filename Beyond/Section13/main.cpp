#include <iostream>
#include <string>
#include "movies.hpp"

int main() {
  Movies movies;

  movies.ShowMovieList();
  movies.AddMovie("MOVIE 1", "PG", 3);
  movies.ShowMovieList();

  movies.IncrementWatched("MOVIE 1");

  movies.IncrementWatched("MOVIE 2");

  movies.AddMovie("MOVIE 2", "R", 12);

  movies.ShowMovieList();

  movies.AddMovie("MOVIE 1", "PG", 3);

  movies.ShowMovieList();

  return 0;
}