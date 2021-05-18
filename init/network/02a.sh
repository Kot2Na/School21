ifconfig -a | grep broadcast | awk '{print$6}'
