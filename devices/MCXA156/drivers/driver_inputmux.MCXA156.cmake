# Add set(CONFIG_USE_driver_inputmux true) in config.cmake to use this component

include_guard(GLOBAL)
message("${CMAKE_CURRENT_LIST_FILE} component is included.")

if((CONFIG_DEVICE_ID STREQUAL MCXA156) AND CONFIG_USE_driver_common AND CONFIG_USE_driver_inputmux_connections)

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/fsl_inputmux.c
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/.
)

else()

message(SEND_ERROR "driver_inputmux.MCXA156 dependency does not meet, please check ${CMAKE_CURRENT_LIST_FILE}.")

endif()
