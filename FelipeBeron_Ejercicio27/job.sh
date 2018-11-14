#PBS -l nodes=4:ppn=1,mem=1gb,walltime=00:10:00
#PBS -M f.beron10@uniandes.edu.co
#PBS -m abe
#PBS -N ejercicio27_Beron

cd $PBS_O_WORKDIR
make clean
make
