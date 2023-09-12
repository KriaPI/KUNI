
add_executable(${PROJECT_NAME} base/KUNI_base.c
)

# Compiler options 
set_target_properties(${PROJECT_NAME} PROPERTIES
    C_STANDARD 23
)

target_compile_options(${PROJECT_NAME} PRIVATE
    $<$<OR:$<C_COMPILER_ID:Clang>,$<C_COMPILER_ID:AppleClang>,$<C_COMPILER_ID:GNU>>: -Wall -Wextra -Wconversion -g3> 
    $<$<C_COMPILER_ID:MSVC>: /W4 /w14640 /permissive->
)