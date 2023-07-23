#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span {
        private:
                unsigned int N;
        public:
                Span(unsigned int& N);
                Span(const Span& src);
                Span& operator=(const Span& src);
                ~Span();

                void addNumber(unsigned int );                
};

#endif