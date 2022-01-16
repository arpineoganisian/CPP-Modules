#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>
#include <set>
#include <map>

int main() {

    int a = 1;
    int b = 10;

    //VECTOR
    std::vector<int> v1;
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(2);
    std::cout << *easyfind(v1, a) << std::endl;

    //LIST
    std::list<int> l2;
    l2.push_back(0);
    l2.push_back(1);
    l2.push_back(2);
    std::cout << *easyfind(v1, a) << std::endl;

    //SET
    std::set<int> s3;
    s3.insert(0);
    s3.insert(1);
    s3.insert(2);
    try {
        std::cout << *easyfind(v1, b) << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    //MAP
    std::map<std::string, int> m4;
    m4.insert(std::make_pair("zero", 0));
    m4.insert(std::make_pair("one", 1));
    m4.insert(std::make_pair("two", 2));
    std::cout << *easyfind(v1, a) << std::endl;

    return 0;
}
