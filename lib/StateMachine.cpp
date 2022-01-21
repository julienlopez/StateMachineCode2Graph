#include "StateMachine.hpp"

#include <gsl/gsl_assert>

namespace LibStateMachineCode2Graph
{

std::size_t StateMachine::numberOfStates() const
{
    return m_states.size();
}

const std::wstring& StateMachine::stateName(const StateIndex index) const
{
    Expects(index < numberOfStates());
    return m_states[index];
}

StateIndex StateMachine::addState(const std::wstring& name)
{
    m_states.push_back(name);
    return StateIndex{m_states.size() - 1};
}

} // namespace LibStateMachineCode2Graph
