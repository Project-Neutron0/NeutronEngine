#include "neutron/macros.h"
#include "neutron/Window.h"
#include "neutron/Events.h"
#include "neutron/Logger.h"

int main() {
    //N::EventSystem::get("windowCreate")->on([])
    N::EventSystem::get((char*)"update")->on([](N::EventArgs data){
        ((N::Window*)data["window"])->bg = N::Color(180, 60, 0, 255);
        N::Logger::Log((std::string)N::Vector2(1, 2));
        N::Logger::Log("i like men");
        N::Logger::Crit("i like men");
        N::Logger::Warn("i like men");
        N::Logger::Error("i like men");
    });

    N::Window();
    return 0;
}