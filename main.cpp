#include <boost/log/trivial.hpp>
#include <string>

std::string get_string() {
    BOOST_LOG_TRIVIAL(debug) << "Hello, world will be printed soon!";
    return "Hello, World";
}

int main() {
    BOOST_LOG_TRIVIAL(info) << get_string();
    return 0;
}
