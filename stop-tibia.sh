#!/bin/bash

echo 'Sniffing into port 7171 and killing connections...'

tcpkill -i wlp8s0 port 7171 &>/dev/null &

PID=$!

sleep 2

echo 'Connections killed! Now killing tcpkill :)'

kill -9 $PID

echo 'Done!'

echo ''
