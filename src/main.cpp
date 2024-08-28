//
// This code example was borrowed from boost::asio documentation:
// https://think-async.com/Asio/boost_asio_1_30_2/doc/html/boost_asio/tutorial/tuttimer1.html
//
// timer.cpp
// ~~~~~~~~~
//
// Copyright (c) 2003-2024 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include "solution.h"

#include <print>

int main() {
    Solution sol;
    sol.start_steady_timer();

    std::println("Hello World!");
}
