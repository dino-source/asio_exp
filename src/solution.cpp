#include "solution.h"
#include <boost/asio.hpp>
#include <boost/asio/io_context.hpp>
#include <boost/asio/post.hpp>
#include <print>

void Solution::play_with_boost_asio() {
    namespace ba = boost::asio;

    ba::io_context ctx;

    ba::post(ctx, [] { std::print("Well, hello "); });
    ba::post(ctx, [] { std::println("internet!"); });

    ctx.run();
}
