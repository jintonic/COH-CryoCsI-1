## Contents

- [detector.tg](detector.tg): text geometry of COH-CryoCsI-1
- [muon.mac](muon.mac): Geant4 macro for cosmic-ray muon simulation
- [gamma.mac](gamma.mac): Geant4 macro for gamma-ray simulation
- [rootlogon.C](rootlogon.C): configuration of [ROOT][] plots
- [docker-compose.yml](docker-compose.yml): docker-compose service definitions

## Get started

Place this project side by side with <https://github.com/jintonic/gears> to use [physino/gears][].

```sh
git clone https://github.com/jintonic/gears.git
git clone https://github.com/jintonic/COH-CryoCsI-1.git
cd gears
docker-compose run --rm gears
root@Geant4:~/gears $ geant4-config --install-datasets
root@Geant4:~/gears $ exit
cd ../COH-CryoCsI-1
docker-compose run --rm gears
root@Geant4:~/COH-CryoCsI-1 $ ls
```

[ROOT]: https://root.cern.ch/
[physino/gears]: https://hub.docker.com/r/physino/gears