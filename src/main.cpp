//
// This code example was borrowed from the following video:
// https://www.youtube.com/watch?v=76T3JO9kFf4
//
#include <boost/asio.hpp>

#include <iostream>
#include <string_view>
#include <system_error>

int main() {
    namespace ba = boost::asio;

    using boost::asio::ip::tcp;

    ba::io_context ctx;
    tcp::socket socket{ctx};
    tcp::endpoint endpoint;

    socket.async_connect(endpoint, [&](std::error_code ec) {
        if (ec) {
            std::string_view err_msg{"Failed to connect with the following error: "};
            std::cerr << err_msg << ec.message() << std::endl;
        } else {
            std::cout << "Connected to" << endpoint << std::endl;
        }
    });

    ctx.run();
}
