#pragma once
#include "models.h"

int findMovieIndex(const std::vector<Movie>& movies, int id);
double expectedOccupancy(const Movie& movie, int start);
Show makeShow(const Movie& movie, const Screen& screen, int start, int turnaround);
void mergeSort(std::vector<Show>& shows, int left, int right);
