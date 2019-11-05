// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from cosmos_like_wallet.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKEOPERATION_HPP
#define DJINNI_GENERATED_COSMOSLIKEOPERATION_HPP

#include <memory>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class CosmosLikeTransaction;

/**Class representing a Cosmos Operation */
class LIBCORE_EXPORT CosmosLikeOperation {
public:
    virtual ~CosmosLikeOperation() {}

    /**
     *Get operation's transaction
     *@return CosmosLikeTransaction object
     */
    virtual std::shared_ptr<CosmosLikeTransaction> getTransaction() = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_COSMOSLIKEOPERATION_HPP