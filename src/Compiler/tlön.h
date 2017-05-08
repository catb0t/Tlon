#pragma once
#include <vector>

namespace tl�n
{
  namespace reflection
  {
    struct method_info
    {
      
    };

    struct property_info
    {

    };

    struct class_info
    {
      const wchar_t* namespace_name;
      const wchar_t* name;

      std::vector<method_info> methods;
      std::vector<property_info> properties;
    };

  }
}
