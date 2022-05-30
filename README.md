# C
### CMock / Unity
Install
```sh
git submodule add https://github.com/Xispa33/CMock tests/frameworks/cmock/
cd tests/frameworks/cmock/; git pull --recurse-submodules
bundle install --path vendor/bundle
```
An internet connection is needed for all commands.

### CMocka

```sh
git submodule add https://git.cryptomilk.org/projects/cmocka.git tests/frameworks/cmocka/
cd tests/frameworks/cmocka/; mkdir build
cd build; cmake ..; make
```
If cmake .. fails, run hash -r command.
cmake -DCMAKE_C_COMPILER=/usr/bin/gcc -DCMAKE_CXX_COMPILER=/usr/bin/gcc ..
to force to use gcc compiler in C and C++

### Jenkins Setup
NGROK
1 - install ngrok: brew install ngrok
2 - Sign up to ngrok and verify email

ngrok config add-authtoken TOKEN
3 - ngrok http 8080

Jenkins Docker
1 - Launch Jenkins server
docker network create jenkins
docker run --name jenkins-docker --rm --detach --privileged --network jenkins --network-alias docker --env DOCKER_TLS_CERTDIR=/certs --volume jenkins-docker-certs:/certs/client --volume jenkins-data:/var/jenkins_home --publish 2376:2376 docker:dind --storage-driver overlay2

2 - Build and launch Jenkins client
docker build -t myjenkins-blueocean:2.332.2-1 . (build Dockerfile_Jenkins)
docker run --name jenkins-blueocean --rm --detach --network jenkins --env DOCKER_HOST=tcp://docker:2376 --env DOCKER_CERT_PATH=/certs/client --env DOCKER_TLS_VERIFY=1 --publish 8080:8080 --publish 50000:50000 --volume jenkins-data:/var/jenkins_home --volume jenkins-docker-certs:/certs/client:ro myjenkins-blueocean:2.332.2-1

3 - Once in Jenkins, download Git plugin 

4 - To trigger the launch of the pipeline on a push event, the following lines have to be included in the Jenkinsfile:
properties([pipelineTriggers([githubPush()])])
node { git url:'https://github.com/Xispa33/C.git', branch:'main' }

Tick GitHub project, GitHub hook trigger for GitSCM

In Github, setup a webhook

ssetup content type to application/json
