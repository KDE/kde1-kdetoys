include_directories (
    ${KDE1_INCLUDE_DIR}
)

set(KODO_SRCS  gridbag.cpp kimgnum.cpp kodo.cpp)

set(KODO_MOC gridbag.moc kimgnum.moc kodo.moc)

qt1_wrap_moc(MOC_FILES ${KODO_MOC})

add_executable(kodo ${KODO_SRCS} ${MOC_FILES})
target_link_libraries(kodo
    ${KDE1_KDECORE}
    ${KDE1_KDEUI}
    Qt::Qt1
    ${X11_LIBRARIES}
)

install(TARGETS kodo RUNTIME DESTINATION ${KDE1_BINDIR})
install(FILES kodo.kdelnk DESTINATION ${KDE1_APPSDIR}/Utilities)
install_icon(kodo.xpm)
install_icon(57-2.gif "${KDE1_DATADIR}/kodo")

install(FILES
    index.html logotp3.gif guide.gif
    DESTINATION ${KDE1_HTMLDIR}/en/kodo )
