#pragma once
#include <string>

class myException
{
private:
    std::string m_error;

public:
    myException(std::string error)
        : m_error(error)
    {
    }

    const char* getError() { return m_error.c_str(); }
};

