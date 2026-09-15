A C++ package to apply geant4 to tracking netron step by step.</br>

Modelling: A binary collision approximate(BCA) softwares which externed from Geant4 to analysis netron primary knocked atoms by tracking particle step by step.</br>


SCOPE:Particle transportation simulation;neutron transportation track


Author: Lei Zhai.</br>

Data:From about 2019/09 to 2020/02.</br>

Location: Sichuan university. Institute of Nuclear Science and Technology, Sichuan University, Chengdu 610064, People's Republic of China.</br>

Email: <zhaileiytp@163.com>  or  <lei.zhai@hfcim.com>  </br>


License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code).


# Useage

## Compile
```shell
git clone https://gitee.com/zhailei-scu/PKASPEC.git
mkdir PKASPEC_build
cd PKASPEC_build/
cmake -S ../PKASPEC/ -DGeant4_DIR=ThePath/geant4-v11.2.0_install/lib/cmake/Geant4/ 
```

# Run
```
source ThePath/geant4-v11.2.0_install/bin/geant4.sh
PKASPEC_build/BCALIB/BCALIB/APPLICATIONS/NeutronW_Simulation 10000 14.1       # 10000 run , neutron energy = 14.1 MeV
```
