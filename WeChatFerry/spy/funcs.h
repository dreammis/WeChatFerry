#pragma once

#include <stdint.h>
#include <string>

int RefreshPyq(uint64_t id);
bool DecryptImage(std::string src, std::string dst);
