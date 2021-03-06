/*
 * Copyright (c) 2011, Vicent Marti
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef SUNDOWN_AUTOLINK_H
#define SUNDOWN_AUTOLINK_H

#include "buffer.h"

#ifdef __cplusplus
namespace upskirt { extern "C" {
#endif

SDPUBFUN int
sd_autolink_issafe(const uint8_t *link, size_t link_len);

SDPUBFUN size_t
sd_autolink__www(size_t *rewind_p, struct sd_buf *link, uint8_t *data, size_t offset, size_t size);

SDPUBFUN size_t
sd_autolink__email(size_t *rewind_p, struct sd_buf *link, uint8_t *data, size_t offset, size_t size);

SDPUBFUN size_t
sd_autolink__url(size_t *rewind_p, struct sd_buf *link, uint8_t *data, size_t offset, size_t size);

#ifdef __cplusplus
} }
#endif

#endif

/* vim: set filetype=c: */
