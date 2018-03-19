
#include <string>
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <cctype>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile;
    ofstream outfile;
    char temp;
    int i = 0;

    outfile.open("process1.txt");

    infile.open("worker1Data.txt");

    while(infile >> temp)
    {
        if(i < 6)
            outfile << temp;

        else if(i == 15)
        {
            outfile << "; ";
            i = 0;
            continue;
        }

        if(i < 5)
            outfile << ",";

        i++;

    }













}
