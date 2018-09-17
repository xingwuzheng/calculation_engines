# Calculation Engines
A program that performs calculations on a series of integers

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project.

### Prerequisites

What things user need to install the software.

```
Make >=4.1
g++ >=4.8
roundup: a unit testing tool
```

### Installing


```
git clone https://github.com/xingwuzheng/calculation_engines.git
```

Or unzip the tar file upload to the user

```
tar -zxvf calculation.tar.gz
```


### Running the code
The program will run from the command line. It has two versions:
```
calc <engine name><file list>
calc <engine name><list of integers>
```
That is, to use the calculation engines, the following command line examples
are valid.

```
./calc Divider input 1.txt
./calc Divider input 1.txt 2.txt
./calc Divider 50
./calc Divider 50 2
./calc Muiltiplier input 1.txt
./calc Muiltiplier input 1.txt 2.txt
./calc Muiltiplier 50
./calc Muiltiplier 50 2
```

## Running the tests
The unit test file is written and placed in the folder unit_test. User can run the unit test automatically by using the 
command in following.

```
bash run_unit_test.sh
```

## Authors

* **Xingwu Zheng** 

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details

