#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/alan/Plant_UAV/src/rotors_simulator/rqt_rotors"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/alan/Plant_UAV/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/alan/Plant_UAV/install/lib/python2.7/dist-packages:/home/alan/Plant_UAV/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/alan/Plant_UAV/build" \
    "/usr/bin/python2" \
    "/home/alan/Plant_UAV/src/rotors_simulator/rqt_rotors/setup.py" \
     \
    build --build-base "/home/alan/Plant_UAV/build/rotors_simulator/rqt_rotors" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/alan/Plant_UAV/install" --install-scripts="/home/alan/Plant_UAV/install/bin"
