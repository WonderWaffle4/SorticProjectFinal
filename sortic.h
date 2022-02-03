#ifndef SORTIC_H_INCLUDED
#define SORTIC_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

void sa(vector<int> &a);
void sb(vector<int> &b);
void ss(vector<int> &a, vector<int> &b);

void pa(vector<int> &a, vector <int> &b);
void pb(vector<int> &b, vector<int> &a);

void ra(vector<int> &a);
void rb(vector<int> &b);
void rr(vector<int> &a, vector<int> &b);

void rra(vector<int> &a);
void rrb(vector<int> &b);
void rrr(vector<int> &a, vector<int> &b);

bool checkFileName(string name);
string outputFileName();
void readFromFile(ifstream &inputFromFile, vector<int> &a);
string filePath(string line);
bool isSorted(vector<int> arr);
int maxNumIndex(vector<int> arr);
void sorter(vector<int> &a, vector<int> &b, HANDLE Console, ofstream &outputToFile, int &numberOfIterations);
int itc_len(string str);
long long itc_toInt(string s);

#endif // SORTIC_H_INCLUDED
