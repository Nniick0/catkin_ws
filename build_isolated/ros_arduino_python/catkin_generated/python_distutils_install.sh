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

echo_and_run cd "/home/sudo_car/catkin_ws/src/ros_arduino_bridge/ros_arduino_python"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/sudo_car/catkin_ws/install_isolated/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/sudo_car/catkin_ws/install_isolated/lib/python2.7/dist-packages:/home/sudo_car/catkin_ws/build_isolated/ros_arduino_python/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/sudo_car/catkin_ws/build_isolated/ros_arduino_python" \
    "/usr/bin/python2" \
    "/home/sudo_car/catkin_ws/src/ros_arduino_bridge/ros_arduino_python/setup.py" \
     \
    build --build-base "/home/sudo_car/catkin_ws/build_isolated/ros_arduino_python" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/sudo_car/catkin_ws/install_isolated" --install-scripts="/home/sudo_car/catkin_ws/install_isolated/bin"
