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


#ifndef INCLUDED_STREAM_AVG_ALL_SPECTRUM_DETECT_FF_H
#define INCLUDED_STREAM_AVG_ALL_SPECTRUM_DETECT_FF_H

#include <stream_avg_all/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace stream_avg_all {

    /*!
     * \brief <+description of block+>
     * \ingroup stream_avg_all
     *
     */
    class STREAM_AVG_ALL_API spectrum_detect_ff : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<spectrum_detect_ff> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of stream_avg_all::spectrum_detect_ff.
       *
       * To avoid accidental use of raw pointers, stream_avg_all::spectrum_detect_ff's
       * constructor is in a private implementation
       * class. stream_avg_all::spectrum_detect_ff::make is the public interface for
       * creating new instances.
       */
      static sptr make(const unsigned int fft_len, const std::vector<float> &window);
    };

  } // namespace stream_avg_all
} // namespace gr

#endif /* INCLUDED_STREAM_AVG_ALL_SPECTRUM_DETECT_FF_H */

