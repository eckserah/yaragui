QT.webengine.VERSION = 5.12.3
QT.webengine.name = QtWebEngine
QT.webengine.module = Qt5WebEngine
QT.webengine.libs = $$QT_MODULE_LIB_BASE
QT.webengine.includes = $$QT_MODULE_INCLUDE_BASE $$QT_MODULE_INCLUDE_BASE/QtWebEngine
QT.webengine.frameworks =
QT.webengine.bins = $$QT_MODULE_BIN_BASE
QT.webengine.depends = core gui qml quick webenginecore
QT.webengine.run_depends = quick_private gui_private core_private webenginecore_private
QT.webengine.uses =
QT.webengine.module_config = v2
QT.webengine.DEFINES = QT_WEBENGINE_LIB
QT.webengine.enabled_features =
QT.webengine.disabled_features =
QT_CONFIG +=
QT_MODULES += webengine
