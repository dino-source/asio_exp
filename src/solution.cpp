#include "solution.h"

#include <boost/asio.hpp>
#include <boost/asio/io_context.hpp>
#include <boost/asio/post.hpp>

#include <print>

namespace ba = boost::asio;

void Solution::ex1_post_multiple_handlers() {

    ba::io_context ctx;

    ba::post(ctx, [] { std::print("Well, hello "); });
    ba::post(ctx, [] { std::println("internet!"); });

    ctx.run();
}
