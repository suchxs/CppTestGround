#include <iostream>
#include <bitset> // for std::bitset





int main() {
	//std::bitset<8> bits{ 0b0000'0101 };
 //   bits.set(3);   // set bit position 3 to 1 (now we have 0000 1101)
 //   bits.flip(4);  // flip bit 4 (now we have 0001 1101)
 //   bits.reset(4); // set bit 4 back to 0 (now we have 0000 1101)

 //   std::cout << "All the bits: " << bits << '\n';
 //   std::cout << "Bit 3 has value: " << bits.test(3) << '\n';
 //   std::cout << "Bit 4 has value: " << bits.test(4) << '\n';


    [[maybe_unused]] constexpr int  isHungry{ 0 };
    [[maybe_unused]] constexpr int  isSad{ 1 };
    [[maybe_unused]] constexpr int  isMad{ 2 };
    [[maybe_unused]] constexpr int  isHappy{ 3 };
    [[maybe_unused]] constexpr int  isLaughing{ 4 };
    [[maybe_unused]] constexpr int  isAsleep{ 5 };
    [[maybe_unused]] constexpr int  isDead{ 6 };
    [[maybe_unused]] constexpr int  isCrying{ 7 };

    std::bitset<8> me{ 0b0000'0101 }; // we need 8 bits, start with bit pattern 0000 0101
    me.set(isHappy);      // set bit position 3 to 1 (now we have 0000 1101)
    me.flip(isLaughing);  // flip bit 4 (now we have 0001 1101)
    me.reset(isLaughing); // set bit 4 back to 0 (now we have 0000 1101)

    std::cout << "All the bits: " << me << '\n';
    std::cout << "I am happy: " << me.test(isHappy) << '\n';
    std::cout << "I am laughing: " << me.test(isLaughing) << '\n';

    std::bitset<4> x{ 0b0110 };

    std::cout << x << 1 << '\n'; // print value of x (0110), then 1
    std::cout << (x << 1) << '\n'; // print x left shifted by 1 (1100)

    return 0;
}