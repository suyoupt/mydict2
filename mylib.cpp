/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "mylib.h"



/**
 * 显示主菜单
 */
void showMainMenu()
{
    
}

/**
 * 新增词条
 * 
 */
void addVocabulary()
{
    //提示输入
    string input;
    cin.ignore(10000,  '\n');
    getline(cin, input);
    
    //验证输入是否符合语法
    
    //载入词库
    map<string,string> dict;
    
    loadDict(dict);
    
    //加入词库或者更新
     vector<string> pair = split(input, ' ');
    if(pair.size() == 2) {
         dict[pair[0]] = pair[1];
    }
    
    //保存词库
     ofstream out;
     out.open("dict.dat");
     
     for( const auto& pair  : dict )
     {
          out << pair.first << ' ' << pair.second << '\n';
     }
     out.close();
}

/**
 * 查询单词
 * 
 */
void searchVocabulary()
{
    //提示输入
    
    //载入词库
    
    //查询单词
    
    
}

/**
 * 载入词典
 */
void loadDict(map<string,string>& dict)
{
    //打开文件
    ifstream in;
    string line;
    
    in.open("dict.dat");
    if(in.good() && !in.eof())
    {
        getline(in, line);
        if(line.length() >0 )
        {
            vector<string> pair = split(line, ' ');
            if(pair.size() == 2) {
                 dict[pair[0]] = pair[1];
            }
        }
    }
    //读取文件，建立词典
    //关闭文件 
    
}


vector<string> split(const string &s, char delim) {
    vector<string> elems;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}