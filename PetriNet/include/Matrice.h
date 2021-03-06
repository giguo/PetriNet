#pragma once
//
// Created by tung on 4/1/16.
//

#ifndef PETRINET_MATRICE_H
#define PETRINET_MATRICE_H

#include <stdexcept>
#include <iterator>
#include <vector>
#include <iostream>

using namespace std;

class Matrice {
public:

	Matrice();

	inline const int get_places() const {
		return places;
	}

	inline const int get_transitions() const {
		return transitions;
	}

	void ajuster(int place, int transitions);

	int &operator()(int place, int transition);

	int operator()(int place, int transition) const;

	friend std::ostream &operator<<(std::ostream &stream, const Matrice &right);

	friend std::istream &operator>>(std::istream &stream, Matrice &right);

protected:
	int clef(int place, int transition) const;

	std::vector<int> arcs;
	int places;
	int transitions;
};

#endif //PETRINET_MATRICE_H
