#pragma once

#include "Utils/StrongType.hpp"

#include <string>
#include <vector>

namespace LibStateMachineCode2Graph
{

struct StateIndex : private Utils::StrongType<std::size_t>
{
    StateIndex(const std::size_t value)
        : Utils::StrongType<std::size_t>{value}
    {
    }

    using Utils::StrongType<std::size_t>::operator std::size_t;
};

class StateMachine
{
public:
    std::size_t numberOfStates() const;

    /**
     * @pre index < numberOfStates()
     */
    const std::wstring& stateName(const StateIndex index) const;

    StateIndex addState(const std::wstring& name);

private:
    std::vector<std::wstring> m_states;
};

} // namespace LibStateMachineCode2Graph
