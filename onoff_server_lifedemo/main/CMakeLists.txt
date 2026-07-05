set(srcs "main.cc"
    "board.cc")

idf_component_register(SRCS "${srcs}"
                    INCLUDE_DIRS  ".")
