#include <vulkan/vulkan.h>
#include <iostream>

int main()
{
    uint32_t version = 0;

    if (vkEnumerateInstanceVersion(&version) != VK_SUCCESS)
    {
        std::cout << "Failed to get Vulkan version\n";
        return 1;
    }

    std::cout << "Vulkan works!\n";
    std::cout << "Version: "
        << VK_VERSION_MAJOR(version) << "."
        << VK_VERSION_MINOR(version) << "."
        << VK_VERSION_PATCH(version) << "\n";

    return 0;
}