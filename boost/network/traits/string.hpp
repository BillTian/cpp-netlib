//            Copyright (c) Dean Michael Berris 2008, 2009.
//                          Glyn Matthews 2009.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)


#ifndef BOOST_NETWORK_TRAITS_STRING_INC
#define BOOST_NETWORK_TRAITS_STRING_INC

# include <string>
# include <boost/network/tags.hpp>

namespace boost { namespace network {

    template <class Tag>
    struct unsupported_tag;

    template <class Tag>
    struct string { 
        typedef unsupported_tag<Tag> type;
    };

    template <>
    struct string<tags::default_string> {
        typedef std::string type;
    };

    template <>
    struct string<tags::default_wstring> {
        typedef std::wstring type;
    };

    template <>
    struct string<tags::http_server> {
        typedef std::string type;
    };

    template <>
    struct string<tags::http_default_8bit_tcp_resolve> {
        typedef std::string type;
    };

    template <>
    struct string<tags::http_default_8bit_udp_resolve> {
        typedef std::string type;
    };

    template <>
    struct string<tags::http_keepalive_8bit_tcp_resolve> {
        typedef std::string type;
    };

    template <>
    struct string<tags::http_keepalive_8bit_udp_resolve> {
        typedef std::string type;
    };

} // namespace network

} // namespace boost


#endif // BOOST_NETWORK_TRAITS_STRING_INC
