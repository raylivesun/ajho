model relTol "Description"
    
    Real time = 4.8;
    Real space = 0.01;
    Real timeStep = 0.001;
    Real spaceStep = 0.0001;
    Integer maxIter = 1000;
    Real tolerance = 1e-6;
    Real maxTime = 10.0;
    Real maxSpace = 1.0;
    Real minTime = 0.0;
    Real minSpace = 0.0;

    Integer numTimeSteps = ceil(maxTime / timeStep);
    Integer numSpaceSteps = ceil(maxSpace / spaceStep);

end relTol;