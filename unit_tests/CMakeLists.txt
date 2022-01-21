set(EXE_TARGET_NAME UnitTests)

file(GLOB_RECURSE SOURCE_FILES "main.cpp")
add_executable(${EXE_TARGET_NAME} ${SOURCE_FILES})

find_package(catch2)

target_link_libraries(${EXE_TARGET_NAME}
	PRIVATE
	StateMachineCode2Graph::LibStateMachineCode2Graph
	Catch2::Catch2
)

include(CTest)
include(Catch)
catch_discover_tests(${EXE_TARGET_NAME})
