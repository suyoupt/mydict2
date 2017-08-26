/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mylib.h
 * Author: Administrator
 *
 * Created on August 26, 2017, 2:03 PM
 */

#include <iostream>
#include <string>
#include <map>
#include <cstring>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

void showMainMenu();
void addVocabulary();
void searchVocabulary();
void loadDict(map<string,string>&);
vector<string> split(const string &, char );


