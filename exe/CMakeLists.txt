set(EXE_TARGET_NAME StateMachineCode2Graph)

file(GLOB_RECURSE SOURCE_FILES "main.cpp")
add_executable(${EXE_TARGET_NAME} ${SOURCE_FILES})

target_link_libraries(${EXE_TARGET_NAME} StateMachineCode2Graph::LibStateMachineCode2Graph)
