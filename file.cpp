/**************************************************************************************************
************************************SOLUTION-BY-MOHIT**********************************************
***************************************************************************************************/
#include <bits/stdc++.h>
int main()
{
    std::ifstream my_file;
    std::string line;
    int num;
    double total;
    my_file.open("./myfile.txt");
    if(!my_file)
    {
        std::cerr << "problem opening file" << std::endl;
        return 1; 
    }
    my_file >> line >> num >> total;
    std::cout << line << std::endl;
    std::cout << num << std::endl;
    std::cout << total << std::endl;
    my_file.close();
    return 0;
}