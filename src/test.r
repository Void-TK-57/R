
# main function
main <- function(path, dependent_value, degree=2) {
    # change path based on data folder
    path <- paste("../data/", path, sep="")
    # read table
    data_ <- read.table(path, , header=TRUE, sep=",")
    # create model
    model <- lm("Rendimento ~ Temperatura", data=data_)
    # print summary
    print(summary(model))
}

args <- commandArgs(trailingOnly=TRUE)
# check args
print(args)
if (length(args) == 0) {
    print("[Error]: No arguments passed")
} else if (length(args) == 1) {
    print("[Error]: Only one argument passed")
} else if (length(args) == 2){
    main(args[1], args[2])
} else {
    main(args[1], args[2], arg[3])
}