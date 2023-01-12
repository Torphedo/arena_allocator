#include "arena.h"
#include "memory.h"
#include "../vendor/logging.h"

int main() {
    arena_t* arena = create_arena(1024, RESERVE, 0);
    char* data = arena_alloc(arena, 1000);
    data = "test string stored in an arena\n";
    char* fill = arena_alloc(arena, 1000);
    memset(fill, 0x5, 24);
    expand_arena(arena, 20);
    log_error(DEBUG, data);
    destroy_arena(arena);
    return 0;
}
