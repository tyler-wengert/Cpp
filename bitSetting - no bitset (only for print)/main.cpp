#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    //set option_viewed
    myArticleFlags ^= option_viewed;

    //check option_deleted
    std::cout << "Has this article been deleted? "<< static_cast<bool>(myArticleFlags & option_deleted) << '\n';

    //toggle option_favorited
    myArticleFlags ^= option_favorited;

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    return 0;
}
