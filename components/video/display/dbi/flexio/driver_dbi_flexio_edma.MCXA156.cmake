# Add set(CONFIG_USE_driver_dbi_flexio_edma true) in config.cmake to use this component

include_guard(GLOBAL)
message("${CMAKE_CURRENT_LIST_FILE} component is included.")

if(CONFIG_USE_driver_edma4 AND CONFIG_USE_driver_dbi AND CONFIG_USE_driver_flexio_mculcd AND CONFIG_USE_driver_flexio_mculcd_edma)

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/fsl_dbi_flexio_edma.c
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/.
)

else()

message(SEND_ERROR "driver_dbi_flexio_edma.MCXA156 dependency does not meet, please check ${CMAKE_CURRENT_LIST_FILE}.")

endif()
