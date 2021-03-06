// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from idl.djinni

#ifndef DJINNI_GENERATED_ALGORANDADDRESS_HPP
#define DJINNI_GENERATED_ALGORANDADDRESS_HPP

#include <cstdint>
#include <string>
#include <vector>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class LIBCORE_EXPORT AlgorandAddress {
public:
    virtual ~AlgorandAddress() {}

    static std::string fromPublicKey(const std::vector<uint8_t> & pubkey);

    static std::vector<uint8_t> toPublicKey(const std::string & address);
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_ALGORANDADDRESS_HPP
