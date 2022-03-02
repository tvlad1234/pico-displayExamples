add_executable(st7789Test
        main.c
        )

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(st7789Test pico_stdlib st7789 gfx)

# create map/bin/hex file etc.
pico_add_extra_outputs(st7789Test)

