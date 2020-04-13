tag := knr:latest

build:
	docker build --rm -t $(tag) .

shell:  ## Run bash shell in local docker container
	docker run \
	--rm \
	-v $(shell pwd):/project \
	-it $(tag) /bin/bash

shell-windows:  ## Run bash shell in local docker container from Powershell
	docker run --rm -v ${PWD}:/project -it knr:latest /bin/bash