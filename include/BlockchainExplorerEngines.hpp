// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#ifndef DJINNI_GENERATED_BLOCKCHAINEXPLORERENGINES_HPP
#define DJINNI_GENERATED_BLOCKCHAINEXPLORERENGINES_HPP

#include <string>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

/** Available API to use with explorers. */
class LIBCORE_EXPORT BlockchainExplorerEngines {
public:
    virtual ~BlockchainExplorerEngines() {}

    static std::string const LEDGER_API;

    static std::string const RIPPLE_API;

    static std::string const RIPPLE_NODE;

    static std::string const TEZOS_NODE;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_BLOCKCHAINEXPLORERENGINES_HPP
