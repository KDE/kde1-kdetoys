add_subdirectory(pics)

include_directories (
    ${KDE1_INCLUDE_DIR}
)

set(KWORLDWATCH_SRCS  astro.c kinputline.cpp main.cpp sunclock.c toplevel.cpp world.cpp)

set(KWORLDWATCH_MOC kinputline.moc toplevel.moc world.moc)

qt1_wrap_moc(MOC_FILES ${KWORLDWATCH_MOC})

add_executable(kworldwatch ${KWORLDWATCH_SRCS} ${MOC_FILES})
target_link_libraries(kworldwatch
    ${KDE1_KDECORE}
    ${KDE1_KDEUI}
    Qt::Qt1
    ${X11_LIBRARIES}
)

install(TARGETS kworldwatch RUNTIME DESTINATION ${KDE1_BINDIR})
install(FILES KWorldWatch.kdelnk DESTINATION ${KDE1_APPSDIR}/Utilities)
install_icon(kworldwatch.xpm)
