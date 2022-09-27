trap " echo hello golu >>a.txt " SIGINT
echo $$
while ((count < 10))
do
    echo $count
    sleep 3
    ((count++))
done