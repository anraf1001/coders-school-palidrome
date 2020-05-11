#pragma once

#include <iostream>
#include <algorithm>

bool isPalindrome(const std::string & text) {
    return text == std::string(text.rbegin(), text.rend());
}