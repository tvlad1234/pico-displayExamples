add_executable(gfxTest
        main.c
        )

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(gfxTest pico_stdlib st7735 gfx)

# create map/bin/hex file etc.
pico_add_extra_outputs(gfxTest)

