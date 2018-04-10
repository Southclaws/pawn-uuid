FROM maddinat0r/debian-samp

RUN apt update && apt install -y uuid-dev:i386 curl
RUN curl https://raw.githubusercontent.com/Southclaws/sampctl/master/install-bin.sh | sh
ADD . .
RUN mkdir build
ENTRYPOINT [ "make", "build-inside" ]