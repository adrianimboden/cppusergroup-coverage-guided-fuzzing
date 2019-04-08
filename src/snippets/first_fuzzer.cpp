#include <string>

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  if (std::string{data, data + size} == "mypassword") {
    abort();
  }
  return 0; // Non-zero return values are reserved for future use.
}
