#!/bin/bash
while read LINE; do
	echo "Ignored; $LINE"
done < .gitignore
