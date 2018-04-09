FROM maddinat0r/debian-samp

RUN apt update && apt install -y uuid-dev:i386
ADD . .
RUN mkdir build
ENTRYPOINT [ "make", "build-inside" ]