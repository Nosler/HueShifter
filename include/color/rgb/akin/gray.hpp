#ifndef color_rgb_akin_gray
#define color_rgb_akin_gray

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../gray/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct rgb< ::color::category::gray_uint8   >{ typedef ::color::category::rgb_uint8   akin_type; };
    template< >struct rgb< ::color::category::gray_uint16  >{ typedef ::color::category::rgb_uint16  akin_type; };
    template< >struct rgb< ::color::category::gray_uint32  >{ typedef ::color::category::rgb_uint32  akin_type; };
    template< >struct rgb< ::color::category::gray_uint64  >{ typedef ::color::category::rgb_uint64  akin_type; };
    template< >struct rgb< ::color::category::gray_float   >{ typedef ::color::category::rgb_float   akin_type; };
    template< >struct rgb< ::color::category::gray_double  >{ typedef ::color::category::rgb_double  akin_type; };
    template< >struct rgb< ::color::category::gray_ldouble >{ typedef ::color::category::rgb_ldouble akin_type; };

   }
 }

#endif
