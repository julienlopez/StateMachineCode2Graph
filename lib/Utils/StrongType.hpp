#pragma once

namespace LibStateMachineCode2Graph::Utils
{

template <class T> struct StrongType
{
    explicit StrongType(const T value)
        : m_value(value)
    {
    }

    operator T() const
    {
        return m_value;
    }

private:
    T m_value;
};

} // namespace LibStateMachineCode2Graph::Utils
