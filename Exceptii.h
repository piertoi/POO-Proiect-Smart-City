#pragma once
#include <exception>
#include <string>

class ExceptieOras : public std::exception {
    std::string mesaj;
public:
    ExceptieOras(const std::string& msg) : mesaj(msg) {}
    const char* what() const noexcept override { return mesaj.c_str(); }
};