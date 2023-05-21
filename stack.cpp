#include "stack.hpp"

float Stack::get()
{
    return m_lastUnit->value;
}

void Stack::push(float f)
{
    StackUnit* unit = new StackUnit;
    
    unit->value         = f;
    unit->previousUnit  = m_lastUnit;

    m_lastUnit = unit;
    m_size++;
}

void Stack::pup()
{
    StackUnit* previousUnit = m_lastUnit->previousUnit;

    delete m_lastUnit;

    m_lastUnit = previousUnit;
    m_size--;
}

int Stack::size()
{
    return m_size;
}

void Stack::clear()
{
    for(int i = 0; i < m_size; i++)
    {
        StackUnit* previousUnit = m_lastUnit->previousUnit;

        delete m_lastUnit;

        m_lastUnit = previousUnit;
    }

    m_size = 0;
}