#include "state.h"

int main()
{
    std::unique_ptr<State> program = std::make_unique<State>();
    program->initialize_program();
    return 0;
}
