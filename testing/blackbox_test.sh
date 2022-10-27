#!/bin/sh

if $1 --should_succeed; then
    echo;
else
    echo "Execution of \"binary --should_succeed\" failed.";
    return 1;
fi


if $1 --should_fail; then
    echo "Execution of \"binary --should_fail\" succeeded.";
    return 1;
fi
