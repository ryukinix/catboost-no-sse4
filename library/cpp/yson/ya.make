LIBRARY()



PEERDIR(
    library/cpp/ytalloc/core
)

SRCS(
    consumer.cpp
    lexer.cpp
    parser.cpp
    token.cpp
    tokenizer.cpp
    varint.cpp
    writer.cpp
)

END()
