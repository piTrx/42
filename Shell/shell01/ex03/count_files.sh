find . -type d -or -type f -name "*" | wc -l | awk '{print $1}'
