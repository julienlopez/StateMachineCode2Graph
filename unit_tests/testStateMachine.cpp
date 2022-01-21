#include <catch2/catch.hpp>

#include "StateMachine.hpp"

using namespace std::string_literals;

using LibStateMachineCode2Graph::StateMachine;

SCENARIO("StateMachine")
{
    GIVEN("A new StateMachine")
    {
        StateMachine sm;

        THEN("It has 0 states")
        {
            CHECK(sm.numberOfStates() == 0);
        }

        WHEN("Adding a new state")
        {
            const auto state1_name = L"state1"s;
            const auto state1_index = sm.addState(state1_name);

            THEN("The new state is added properly")
            {
                REQUIRE(sm.numberOfStates() == 1);
                CHECK(sm.stateName(state1_index) == state1_name);
            }
        }
    }
}