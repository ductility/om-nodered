# Open Manipulator Node-RED Controller + Docker

It is a software that operates an Open-Manipulator with Docker.

## Installation

Install nvidia drivers.

```bash
$ sudo apt-add-repository ppa:graphics-drivers/ppa
$ sudo apt remove nvidia*
$ sudo apt autoremove
$ sudo ubuntu-drivers autoinstall
```

Install `nvidia-container-toolkit`
```bash
# Add the package repositories
$ distribution=$(. /etc/os-release;echo $ID$VERSION_ID)
$ curl -s -L https://nvidia.github.io/nvidia-docker/gpgkey | sudo apt-key add -
$ curl -s -L https://nvidia.github.io/nvidia-docker/$distribution/nvidia-docker.list | sudo tee /etc/apt/sources.list.d/nvidia-docker.list

$ sudo apt update && sudo apt install -y nvidia-container-toolkit
$ sudo systemctl restart docker
```

Pull ductility/om-nodered Docker image.

```bash
$ docker pull ductility/om-nodered
```

## RUN
Run docker container

```bash
$ ./run-docker.sh
```

If you want to use an additional terminal in the container, use the following command on the host.

```bash
$ ./exec.sh
```