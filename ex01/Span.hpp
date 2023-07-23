#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
private:
    unsigned int N;
    std::vector<int> vec;

public:
    Span(unsigned int N);
    Span(const Span& src);
    Span& operator=(const Span& src);
    ~Span();

    void addNumber(int num);
    int shortestSpan() const;
    int longestSpan() const;

    template <typename I>
    void addRange(I start, I end) {
		if (std::distance(start, end) > static_cast<int>(N - vec.size()))
            throw std::runtime_error("Adding this range exceeds the capacity of the Span.");

        vec.insert(vec.end(), start, end);
    }
};

#endif
