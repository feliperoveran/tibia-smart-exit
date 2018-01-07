# tibia-smart-exit
Very simple smart-exit solution using C++ and bash

Listening on `event3` input stream for `F9` keypress and then kill all connections on port 7171.

Input stream and trigger keys can be configured changing `input` and `trigger_key` constants

To see they desired trigger key code, use `sudo showkey`

And to find out which input stream we should use, `cat /proc/bus/input/devices` or inspecting the symlinks on `/dev/input/by-id` or `/dev/input/by-path`
