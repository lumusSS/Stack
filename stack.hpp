#pragma once

#include "stack_unit.hpp"

class Stack
{

private:
    StackUnit*  m_lastUnit;
    int         m_size = 0;

public:
    float   get();

    void    push(float f);
    void    pup();
    int     size();
    void    clear();
};