//
//  main.cpp
//  14. Longest Common Prefix
//
//  Created by chenyufeng on 10/3/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string>& strs)
{
    if (strs.empty())
    {
        return "";
    }

    if (strs.size() == 1)
    {
        return strs[0];
    }

    string firstStr = strs[0];
    vector<char> vectorFirstStr;
    for (int i = 0; i < firstStr.length(); i++)
    {
        vectorFirstStr.push_back(firstStr[i]);
    }

    vector<char> resultVec;

    for (int i = 0; i < vectorFirstStr.size(); i++)
        for (int j = 1; j < strs.size(); j++)
        {
            string temp = strs[j];
            if (vectorFirstStr[i] != temp[i])
            {
                string resultString;
                for (int i = 0; i < resultVec.size(); i++)
                {
                    resultString += resultVec[i];
                }
                return resultString.empty() ? "" : resultString;
            }
            if (vectorFirstStr[i] == temp[i] && j == strs.size() - 1 )
            {
                resultVec.push_back(temp[i]);
            }
        }

    return "";
}

int main(int argc, const char * argv[])
{
    vector<string> vv;
    vv.push_back("bcccc");
//    vv.push_back("abrr");
//    vv.push_back("abwee");


    string ss = longestCommonPrefix(vv);
    cout << ss;



    return 0;
}



