#include "Span.hpp"

int main() {
    try {
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

        // Using addRange to add multiple numbers at once
        std::vector<int> numbersToAdd;
        numbersToAdd.push_back(1);
        numbersToAdd.push_back(2);
        // numbersToAdd.push_back(3);
        // numbersToAdd.push_back(4);
        // numbersToAdd.push_back(5);
        sp.addRange(numbersToAdd.begin(), numbersToAdd.end());

        std::cout << "Shortest span after adding range: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span after adding range: " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
