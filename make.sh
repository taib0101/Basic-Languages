function recursive
{
    local pathh="$1"
    tput setaf 2
    echo "$pathh"
    tput setaf 0
    for i in "$pathh"/*
    do
        local filer=$(echo "$i")
        tput setaf 4
        echo "$filer"
        tput setaf 0

        if [ -d "$filer" ] # if [ !  -d "$file" ]
        then
            recursive "$filer"
        elif [ -f "$filer" ] && 
        [ "$path/make.sh" != "$filer" ] && 
        [ "$path/output" != "$filer" ]
        then
            # echo " " > $filer
            echo "//I seek refused with Allah,from the accursed devil" > tmp.txt
            echo "//In the name of Allah the Entirely Merciful the Especially Merciful" >> tmp.txt
            local file_cat=$(cat "$filer")
            echo "$file_cat" >> tmp.txt
	        # cat "tmp.txt"
            local tmpp=$(cat "tmp.txt")
	        echo "${tmpp}"
            echo "$tmpp" > "$filer"
            rm tmp.txt
        fi
    done
    # rm "tmp.txt"
    return
}


path=$(pwd)
tput bold
tput setaf 1
echo "$path"
tput setaf 0

for i in "${path}"/*
do
    file=$(echo "$i")
    if [ -d "$file" ] # if [ ! -d "$file" ]
    then
        recursive "${file}"
    elif [ -f "${file}" ] && 
    [ "${path}/make.sh" != "${file}" ] && 
    [ "${path}/output" != "${file}" ]
    then
        # echo " " > $file
        echo "//I seek refused with Allah,from the accursed devil" > tmp.txt
        echo "//In the name of Allah the Entirely Merciful the Especially Merciful" >> tmp.txt
        file_cat=$(cat "${file}")
        echo "${file_cat}" >> tmp.txt
        cat tmp.txt
        tmpp=$(cat "tmp.txt")
        echo "${tmpp}" > "${file}"
        rm "tmp.txt"
    fi
done
