// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from cosmos_like_wallet.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKEVOTEOPTION_HPP
#define DJINNI_GENERATED_COSMOSLIKEVOTEOPTION_HPP

#include <functional>
#include <iostream>
#include <string>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

enum class CosmosLikeVoteOption : int {
    YES,
    NO,
    NOWITHVETO,
    ABSTAIN,
};
LIBCORE_EXPORT  std::string to_string(const CosmosLikeVoteOption& cosmosLikeVoteOption);
LIBCORE_EXPORT  std::ostream &operator<<(std::ostream &os, const CosmosLikeVoteOption &o);

} } }  // namespace ledger::core::api

namespace std {

template <>
struct hash<::ledger::core::api::CosmosLikeVoteOption> {
    size_t operator()(::ledger::core::api::CosmosLikeVoteOption type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
#endif //DJINNI_GENERATED_COSMOSLIKEVOTEOPTION_HPP
