#!/bin/sh
# This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/ios/run.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"


case $1 in
debug)
    echo "Opening Xcode"
##if #(Cocoapods:Defined)
#    pod install
#    open -aXcode "#(Project.Name).xcworkspace"
##else
    open -aXcode "demo-app.xcodeproj"
##endif
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.demoapp"
    "/Users/ognen/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/prebuilt/iOS/bin/ios-deploy" -9 -1 "com.apps.demoapp"
    exit $?
    ;;
esac

##if #(Cocoapods:Defined)
#pod install
#"#(Base.Directory)/bin/ios-deploy" --noninteractive --debug --bundle "build/Build/Products/#(Pbxproj.Configuration)-iphoneos/#(Project.Name).app" "$#"
##else
"/Users/ognen/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/prebuilt/iOS/bin/ios-deploy" --noninteractive --debug --bundle "build/Release-iphoneos/demo-app.app" "$@"
##endif
