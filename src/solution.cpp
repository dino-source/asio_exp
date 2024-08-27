#include "solution.h"
#include <boost/asio.hpp>
#include <boost/asio/io_context.hpp>
#include <boost/asio/post.hpp>
#include <print>

void Solution::ex1_post_multiple_handlers() {
    namespace ba = boost::asio;

    ba::io_context ctx;

    ba::post(ctx, [] { std::print("Well, hello "); });
    ba::post(ctx, [] { std::println("internet!"); });

    ctx.run();
}
