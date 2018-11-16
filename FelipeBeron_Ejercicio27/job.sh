#PBS -l nodes=4:ppn=1,mem=1gb,walltime=00:10:00
#PBS -M f.beron10@uniandes.edu.co
#PBS -m abe
#PBS -N ejercicio27_Beron

cd $PBS_O_WORKDIR
rm -f *.dat
mpicc sample.c -o sample.x
mpirun -np 10 ./sample.x.out 10000 0.0 1.0
