/* -*- c++ -*- */
/* 
 * Copyright 2013 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_STREAM_AVG_ALL_STREAM_AVG_FF_IMPL_H
#define INCLUDED_STREAM_AVG_ALL_STREAM_AVG_FF_IMPL_H

#include <stream_avg_all/stream_avg_ff.h>

namespace gr {
  namespace stream_avg_all {

    class stream_avg_ff_impl : public stream_avg_ff
    {
     private:
      // Nothing to declare in this block
	unsigned int fft_len;
	unsigned int nstreams;

     public:
      stream_avg_ff_impl(const unsigned int fft_len, const unsigned int nstreams);
      ~stream_avg_ff_impl();

      // Where all the action really happens
      int work(int noutput_items,
	       gr_vector_const_void_star &input_items,
	       gr_vector_void_star &output_items);
    };

  } // namespace stream_avg_all
} // namespace gr

#endif /* INCLUDED_STREAM_AVG_ALL_STREAM_AVG_FF_IMPL_H */

