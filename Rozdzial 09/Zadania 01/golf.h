#pragma once
const int Len = 40;

struct Golf {
	char fullname[Len];
	int handicap;
};

void setgolf(Golf& g, const char * name, int hc);

int setgolf(Golf& g);

void handicap(Golf& g, int hc);

void showgolf(const Golf& g);