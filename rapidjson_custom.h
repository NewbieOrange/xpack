#ifndef __X_PACK_RAPIDJSON_CUSTOME_H
#define __X_PACK_RAPIDJSON_CUSTOME_H

#define XPACK_RAPIDJSON_NAMESPACE xpack::rapidjson
#define XPACK_RAPIDJSON_NAMESPACE_BEGIN namespace xpack::rapidjson {
#define XPACK_RAPIDJSON_NAMESPACE_END   }

#ifndef XPACK_RAPIDJSON_NOEXCEPT_ASSERT
  #include <cassert>
  #define XPACK_RAPIDJSON_NOEXCEPT_ASSERT(x) assert(x)
#endif

#ifndef XPACK_RAPIDJSON_ASSERT
  #include <stdexcept>
  #define XPACK_RAPIDJSON_ASSERT(x) if(!(x)) throw std::runtime_error(#x)
#endif

#ifndef XPACK_RAPIDJSON_WRITE_DEFAULT_FLAGS
#define XPACK_RAPIDJSON_WRITE_DEFAULT_FLAGS kWriteNanAndInfFlag
#endif

#endif

