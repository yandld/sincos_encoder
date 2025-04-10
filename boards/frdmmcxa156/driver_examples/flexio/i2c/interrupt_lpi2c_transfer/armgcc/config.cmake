# config to select component, the format is CONFIG_USE_${component}
# Please refer to cmake files below to get available components:
#  ${SdkRootDirPath}/devices/MCXA156/all_lib_device.cmake

set(CONFIG_COMPILER gcc)
set(CONFIG_TOOLCHAIN armgcc)
set(CONFIG_USE_COMPONENT_CONFIGURATION false)
set(CONFIG_USE_driver_port true)
set(CONFIG_USE_driver_gpio true)
set(CONFIG_USE_driver_clock true)
set(CONFIG_USE_driver_flexio true)
set(CONFIG_USE_driver_flexio_i2c_master true)
set(CONFIG_USE_driver_lpi2c true)
set(CONFIG_USE_driver_common true)
set(CONFIG_USE_driver_reset true)
set(CONFIG_USE_driver_lpuart true)
set(CONFIG_USE_component_lpuart_adapter true)
set(CONFIG_USE_component_lists true)
set(CONFIG_USE_utilities_misc_utilities true)
set(CONFIG_USE_device_MCXA156_CMSIS true)
set(CONFIG_USE_device_MCXA156_startup true)
set(CONFIG_USE_utility_debug_console_lite true)
set(CONFIG_USE_utility_assert_lite true)
set(CONFIG_USE_driver_mcx_spc true)
set(CONFIG_USE_CMSIS_Include_core_cm true)
set(CONFIG_USE_device_MCXA156_system true)
set(CONFIG_USE_utility_str true)
set(CONFIG_CORE cm33)
set(CONFIG_DEVICE MCXA156)
set(CONFIG_BOARD frdmmcxa156)
set(CONFIG_KIT frdmmcxa156)
set(CONFIG_DEVICE_ID MCXA156)
set(CONFIG_FPU SP_FPU)
set(CONFIG_DSP DSP)
set(CONFIG_CORE_ID cm33)
