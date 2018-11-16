#PBS -l nodes=1:ppn=1,mem=1gb,walltime=00:10:00
#PBS -M f.beron10@uniandes.edu.co
#PBS -m abe
#PBS -N ejercicio28

cd $PBS_O_WORKDIR
mpicc listing_12_7.c -lm -o listing.x
mpirun -np 16 -hostfile hosts ./listing.out
100000
