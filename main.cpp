#include <iostream>
#include <cstdint>
int main() {
        std::uint64_t mul0 = 111U;
		std::uint64_t mul1 = 111U;
		std::uint64_t mul2 = 111U;
		std::uint64_t mul3 = 111U;
		std::uint64_t mul4 = 111U;
        for (std::uint64_t i = 0U; i < 1'000'000'000U; ++i) {
                mul0 *= 1U;
                mul1 *= 1U;
                mul2 *= 1U;
                mul3 *= 1U;
                mul4 *= 1U;
        }
        std::cout << mul0 << std::endl;
        return 0;
}