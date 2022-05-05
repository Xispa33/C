pipeline {
    agent any
    
    triggers {
        githubPush()
    } 
 
    stages {
        stage('Build') {
            steps {
                echo ' **** Build Step **** '
                // In this step, compilation of the produced code in a 
                // docker container fetched from artifactory
            }
        }
        
        stage('Card Reservation') {
            steps {
                echo ' **** Card Reservation Step **** '
                // In this step, reservation of a board
            }
        }
        
        stage('Test') {
            steps {
                echo ' **** Test Step **** '
                // In this step, testing of the produced code
            }
        }
        
        stage('Card Release') {
            steps {
                echo ' **** Card Release Step **** '
                // In this step, release of the reserved board
            }
        }
        
        stage('Quality Analysis') {
            steps {
                echo ' **** Quality Analysis Step **** '
                // In this step, analysis of the quality
            }
        }
        
        stage('Deploy') {
            steps {
                echo ' **** Deploy Step **** '
                // In this step, deployment
            }
        }
    }
}

