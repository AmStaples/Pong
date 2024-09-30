#include <vulkan/vulkan.h>
#include <iostream>
using namespace std;
int main() 
{
    VkApplicationInfo appInfo = {};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "Pong";
    appInfo.pEngineName = "Ponggine";

    VkInstanceCreateInfo InstanceInfo = {};
    InstanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    InstanceInfo.pApplicationInfo = &appInfo;
    
    VkInstance instance;

    VkResult result = vkCreateInstance(&InstanceInfo, 0, &instance);

    if(result == VK_SUCCESS) {
        std::cout << "Successfully create vulkan instance" << std::endl;
    }

    
    
    return 0;
}