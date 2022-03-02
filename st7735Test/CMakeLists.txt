add_executable(st7735Test
        main.c
        )

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(st7735Test pico_stdlib st7735 gfx)

# create map/bin/hex file etc.
pico_add_extra_outputs(st7735Test)

