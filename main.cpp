/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 * 我的字典
 * 1）新增词条
 * 2）查询单词
 */

/* 
 * File:   main.cpp
 * Author: Administrator
 *
 * Created on August 26, 2017, 1:53 PM
 */

#include <cstdlib>
#include "mylib.h"
#include <string>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //显示主菜单
    showMainMenu();
    
    //输入命令并执行相应操作
    string cmd;
    cin >> cmd;
    
    if(cmd == "add")
    {
        addVocabulary();
    }else if(cmd == "search")
    {
        searchVocabulary();
    }else
    {
        exit(0);
    }
    
    
    return 0;
}

