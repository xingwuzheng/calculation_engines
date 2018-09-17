echo Build the roundup unit_test framework for our unit_test
cd unit_test
cd roundup
./configure
make
cd ..
cd ..
echo Finish of the setup for framework

# run the unit test
echo Start the unit_test
./unit_test/roundup/roundup ./unit_test/test.sh
