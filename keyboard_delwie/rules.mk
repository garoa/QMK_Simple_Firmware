# Microcontroladora
MCU = atmega32u4

# Processor frequency, only AVR
F_CPU = 16000000

# Ativa o driver Serial do ATmega32U4, so para comunucacai entre teclados splits
#SERIAL_DRIVER = vendor      

# Portabildiade entre MCU
UART_DRIVER_REQUIRED = yes

# Ativa o barramento I2C do ATmega32U4
#I2C_DRIVER_ENABLE = yes

# Ativa o driver customizado de matriz para o MCP23017
#CUSTOM_MATRIX = yes

# Habilita suporte a mensagens de print para o PC
#CONSOLE_ENABLE = yes

# Mouse keys
MOUSEKEY_ENABLE = no

# Audio control and System control
AUDIO_ENABLE = no

# Enable Bootmagic Lite
BOOTMAGIC_ENABLE = no

EXTRAKEY_ENABLE = no

NKRO_ENABLE = no