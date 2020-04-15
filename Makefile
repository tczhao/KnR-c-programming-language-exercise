tag := knr:latest

build:
	docker build --rm -t $(tag) .

shell:  ## Run bash shell in local docker container
	docker run \
	--rm \
	-v $(shell pwd):/project \
	-it $(tag) /bin/bash

run:  ## compile and run
	ls $(shell pwd) | grep '\.c' | xargs cc
	$(shell pwd)/a.out