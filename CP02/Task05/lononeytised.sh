sed "s/shell /shell\n/g" | sed 's/theo1/Wile E. Coyote/ '| sed 's/steven1/Daffy Duck/'| sed 's/arnaud1/Porky Pig/'| sed 's/pierre-jean/Marvin the Martian/'| grep -e 'Wile E. Coyote' -e 'Daffy Duck' -e 'Porky Pig' -e 'Marvin the Martian'
