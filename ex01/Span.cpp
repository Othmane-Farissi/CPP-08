#include    "Span.hpp"

Span::Span(unsigned int N) : N(N) {}

Span::Span(const Span& src) : N(src.N) , vec(src.vec) {}

Span&   Span::operator=(const Span& src) {
    if (this != &src)
    {
        this->N = src.N;
        this->vec = src.vec;
    }
    return *this;
}

Span::~Span () {}

void    Span::addNumber(int num)
{
    if (vec.size() >= N)
        throw std::runtime_error("Span is Full");
    vec.push_back(num);
}

int    Span::shortestSpan() const {
    if (vec.size() < 2)
        throw std::runtime_error("Not enough vec");
    std::vector<int> toSort(vec);
    std::sort(toSort.begin() , toSort.end());

    int rslt = toSort[1] - toSort[0];
    for (std::vector<int>::iterator it = toSort.begin() + 1; it != toSort.end(); it++)
    {
        int diff = *it - *(it - 1);
        if (diff < rslt)
            rslt = diff;
    }
    return rslt;
}

int Span::longestSpan() const {
    if (vec.size() < 2)
        throw std::runtime_error("Not enough vec.");

    int min = *std::min_element(vec.begin(), vec.end());
    int max = *std::max_element(vec.begin(), vec.end());
    return max - min;
}

