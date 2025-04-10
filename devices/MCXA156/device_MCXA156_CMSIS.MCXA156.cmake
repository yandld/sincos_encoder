# Add set(CONFIG_USE_device_MCXA156_CMSIS true) in config.cmake to use this component

include_guard(GLOBAL)
message("${CMAKE_CURRENT_LIST_FILE} component is included.")

if((CONFIG_DEVICE_ID STREQUAL MCXA156) AND CONFIG_USE_CMSIS_Include_core_cm)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/.
)

else()

message(SEND_ERROR "device_MCXA156_CMSIS.MCXA156 dependency does not meet, please check ${CMAKE_CURRENT_LIST_FILE}.")

endif()
