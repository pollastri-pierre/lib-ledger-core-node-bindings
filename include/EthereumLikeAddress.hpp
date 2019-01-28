// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#ifndef DJINNI_GENERATED_ETHEREUMLIKEADDRESS_HPP
#define DJINNI_GENERATED_ETHEREUMLIKEADDRESS_HPP

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

struct EthereumLikeNetworkParameters;

/** Helper class for manipulating Ethereum like addresses */
class LIBCORE_EXPORT EthereumLikeAddress {
public:
    virtual ~EthereumLikeAddress() {}

    /**
     * Gets the version of the address
     * @return The version of the address
     */
    virtual std::vector<uint8_t> getVersion() = 0;

    /**
     * Gets the raw keccak hash of the public key (truncated to 20 bytes)
     * @return The 20 bytes of the public key keccak hash
     */
    virtual std::vector<uint8_t> getKeccakHash() = 0;

    /**
     * Gets the network parameters used for serializing the address
     * @return The network parameters of the address
     */
    virtual EthereumLikeNetworkParameters getNetworkParameters() = 0;

    /**
     * Encodes keccak with respect to EIP55
     * @return The EIP55 encoding
     */
    virtual std::string toEIP55() = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_ETHEREUMLIKEADDRESS_HPP
