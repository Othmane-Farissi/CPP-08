#include    "easyfind.hpp"
#include    <vector>
#include    <list>
#include    <set>

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(6);
    lst.push_back(7);


    int toFind = 1;

    std::vector<int>::iterator vIt = easyfind(vec, toFind);
    std::list<int>::iterator lIt = easyfind(lst, toFind);

    if (vIt != vec.end())
        std::cout << toFind << " is found in the vector" << std::endl;
    else
        std::cout << toFind << " was not found in the vector" << std::endl;
    
    if (lIt != lst.end())
        std::cout << toFind << " is found in the list" << std::endl;
    else
        std::cout << toFind << " was not found in the list" << std::endl;
}


// std::find return an iterator pointing to the found element or 
// an iterator pointing to the end of the container if the element 
// is not found.