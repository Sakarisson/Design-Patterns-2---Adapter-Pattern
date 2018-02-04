#ifndef NOBAKINGEXCEPTION_H
#define NOBAKINGEXCEPTION_H

#include <string>

// Extends out_of_range error
class NoBakingException : public std::out_of_range {
public:
    explicit NoBakingException (const std::string& what_arg)
        : out_of_range(what_arg) {}
};

#endif
