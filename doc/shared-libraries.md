Shared Libraries
================

## najafbitconsensus

The purpose of this library is to make the verification functionality that is critical to Najafbit's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `najafbitconsensus.h` located in  `src/script/najafbitconsensus.h`.

#### Version

`najafbitconsensus_version` returns an `unsigned int` with the the API version *(currently at an experimental `0`)*.

#### Script Validation

`najafbitconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `najafbitconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `najafbitconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `najafbitconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/najafbit/bips/blob/master/bip-0016.mediawiki)) subscripts
- `najafbitconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/najafbit/bips/blob/master/bip-0066.mediawiki)) compliance

##### Errors
- `najafbitconsensus_ERR_OK` - No errors with input parameters *(see the return value of `najafbitconsensus_verify_script` for the verification status)*
- `najafbitconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `najafbitconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `najafbitconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`

### Example Implementations
- [NNajafbit](https://github.com/NicolasDorier/NNajafbit/blob/master/NNajafbit/Script.cs#L814) (.NET Bindings)
- [node-libnajafbitconsensus](https://github.com/bitpay/node-libnajafbitconsensus) (Node.js Bindings)
- [java-libnajafbitconsensus](https://github.com/dexX7/java-libnajafbitconsensus) (Java Bindings)
- [najafbitconsensus-php](https://github.com/Bit-Wasp/najafbitconsensus-php) (PHP Bindings)
