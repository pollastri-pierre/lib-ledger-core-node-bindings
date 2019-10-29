// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from events.djinni

#ifndef DJINNI_GENERATED_EVENTCODE_HPP
#define DJINNI_GENERATED_EVENTCODE_HPP

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

enum class EventCode : int {
    /** An unknown event code. */
    UNDEFINED,
    /** A new operation event. */
    NEW_OPERATION,
    /** A new block event. */
    NEW_BLOCK,
    /** Event emitted when a wallet synchronization started. */
    SYNCHRONIZATION_STARTED,
    /** Event emitted when a wallet synchronization failed. */
    SYNCHRONIZATION_FAILED,
    /** Event emitted when a wallet synchronization succeeded. */
    SYNCHRONIZATION_SUCCEED,
    /** Event emitted when a wallet synchronization succeeded on the previously empty account. */
    SYNCHRONIZATION_SUCCEED_ON_PREVIOUSLY_EMPTY_ACCOUNT,
};
LIBCORE_EXPORT  std::string to_string(const EventCode& eventCode);
LIBCORE_EXPORT  std::ostream &operator<<(std::ostream &os, const EventCode &o);

} } }  // namespace ledger::core::api

namespace std {

template <>
struct hash<::ledger::core::api::EventCode> {
    size_t operator()(::ledger::core::api::EventCode type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
#endif //DJINNI_GENERATED_EVENTCODE_HPP