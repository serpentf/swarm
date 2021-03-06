/*
 * 2013+ Copyright (c) Ruslan Nigatullin <euroelessar@yandex.ru>
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef IOREMAP_THEVOID_STOCKREPLIES_P_HPP
#define IOREMAP_THEVOID_STOCKREPLIES_P_HPP

#include <boost/asio/buffer.hpp>
#include <swarm/networkrequest.h>

namespace ioremap {
namespace thevoid {

namespace stock_replies
{

boost::asio::const_buffer status_to_buffer(swarm::network_reply::status_type status);
boost::asio::const_buffer status_content(swarm::network_reply::status_type status);
swarm::network_reply stock_reply(swarm::network_reply::status_type status);
std::vector<boost::asio::const_buffer> to_buffers(const swarm::network_reply &reply, const boost::asio::const_buffer &content);

}

} } // namespace ioremap::thevoid

#endif // IOREMAP_THEVOID_STOCKREPLIES_P_HPP
