#include "solution.h"

#include <boost/asio.hpp>

void Solution::start_steady_timer() {
    namespace ba = boost::asio;

    ba::io_context ctx;
    ba::steady_timer timer(ctx, ba::chrono::seconds(5));
    timer.wait();
}
