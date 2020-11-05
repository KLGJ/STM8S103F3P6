
SDCC = sdcc
SDCFLAGS = --opt-code-speed
# SDCFLAGS = --opt-code-size
FLASH = stm8flash
FLASH_PROGRAMMER = -c stlinkv2
FLASH_MCU = -p stm8s103f3
FLASH_OPT = -s opt

all: main.ihx
main.ihx: main.c
	@$(SDCC) $(SDCFLAGS) -lstm8 -mstm8 --out-fmt-ihx -o $@ $^
	@-rm -f main.asm main.cdb main.lk main.lst main.map main.rel main.rst main.sym

flash: main.ihx
	@$(FLASH) $(FLASH_PROGRAMMER) $(FLASH_MCU) -w $<
clean:
	-rm -f main.asm main.cdb main.lk main.lst main.map main.rel main.rst main.sym

%.ihx: %.c
	@$(SDCC) $(SDCFLAGS) -lstm8 -mstm8 --out-fmt-ihx -o $@ $^

.PHONY: all flash clean
