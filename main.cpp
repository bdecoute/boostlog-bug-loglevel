#include <boost/log/core.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/trivial.hpp>
#include <string>

namespace logging = boost::log;

logging::trivial::severity_level severity_level = logging::trivial::info;

void init() {
    logging::core::get()->set_filter(
        logging::trivial::severity >= severity_level
    );
}

std::string get_string() {
    BOOST_LOG_TRIVIAL(debug) << "Hello, world will be printed soon!";
    return "Hello, World";
}

int main() {
    init();

    BOOST_LOG_TRIVIAL(info) << get_string();
    return 0;
}
