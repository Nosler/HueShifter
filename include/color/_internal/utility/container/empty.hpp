#ifndef color__internal_utility_container_empty
#define color__internal_utility_container_empty

// ::color::_internal::utility::container::empty<value_name, length>

#include "../type/index.hpp"
#include "../../generic/type/nothing_type.hpp"

namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace container
       {

        template< typename index_name >
         struct empty
          {
           public:
             typedef index_name index_type;

             typedef ::color::type::nothing_type     value_type;
             typedef ::color::type::nothing_type  instance_type;

             typedef instance_type const      const_type;
             typedef instance_type const&     return_image_type;
             typedef instance_type      &     return_type;
             typedef instance_type      &     return_original_type;
             typedef instance_type const&     input_const_type;
             typedef instance_type      &     input_type;
             typedef instance_type      &     output_type;

             typedef ::color::_internal::utility::type::index< index_name >   index_trait_type;

             typedef typename index_trait_type::instance_type     index_instance_type;
             typedef typename index_trait_type::const_type        index_const_type;
             typedef typename index_trait_type::input_const_type  index_input_const_type;
             typedef typename index_trait_type::return_image_type index_return_image_type;

             typedef ::color::_internal::utility::component::blank<index_type>         component_trait_type;

             typedef typename component_trait_type::instance_type        component_type;
             typedef typename component_trait_type::const_type           component_const_type;
             typedef typename component_trait_type::return_image_type    component_return_const_type;
             typedef typename component_trait_type::input_const_type     component_input_const_type;

             typedef void set_return_type;

             enum { size_entity = length };


             static component_return_const_type get( input_const_type container, index_input_const_type index )
              {
               static instance_type s_instance;
               return s_instance;
              }

             template< index_instance_type index >
              static component_return_const_type get( input_const_type container )
               {
               static instance_type s_instance;
               return s_instance;
               }

             static set_return_type set( input_type container, index_input_const_type index, component_input_const_type value )
              {
              }

             template< index_instance_type index >
              static set_return_type set( input_type container, component_input_const_type value )
               {
               }

             static /*constexpr*/ index_return_image_type size()
              {
               static const index_instance_type local_length = length;
               return local_length;
              }
          };
       }
     }
   }
 }

#endif
