idf_component_register(SRCS "main.cc" "board.c"
                    INCLUDE_DIRS  ".")
target_compile_options(${COMPONENT_LIB} PRIVATE -Wno-missing-field-initializers)