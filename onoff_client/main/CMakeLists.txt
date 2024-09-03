set(srcs
        "board.c")

idf_component_register(SRCS "main.cc" "${srcs}"
                    INCLUDE_DIRS  ".")
