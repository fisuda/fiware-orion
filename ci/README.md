## Overview
Travis is enabled in this repository so each pull request is checked before being allowed to merge.
The system is based on `fiware/orion-ci:rpm7` which is built from master branch each time a new PR lands in master,
providing a clean environment with all build dependencies onboard. The Dockerfile used to build this docker is available
in the `ci/rpm7` directory.

Note that `fiware/orion-ci:rpm7` is *not* rebuilt due to changes in the PR branch under test. Thus, if you are developing
a functionality that requires a new library or base system you need to do *first* a PR adding such library or base system
to `ci/rpm7/build-dep.sh` and/or `Dockerfile`. Once that PR gets merged into master and `fiware/orion-ci:rpm7` gets rebuild 
(checking progress in Dockerhub at: https://hub.docker.com/r/fiware/orion-ci/builds) your PR branch with the new 
functionality is ready to be tested with travis. 

The Travis checks are divided into stages, which are described in "Supported tests" section.

## Supported tests
Current version of CI supports:
* file compliance check
* payload check
* style check
* unit test
* function test

File compliance, payload and style checks are combined in one 'compliance' test.

## Changes in tests

There is an special function in `build.sh` script named `_fix_tests()` which purpose is to do some on-the-fly adaptations
in order to make functional test to work under travis. In particular:

* Test under `3000_allow_creation_transient_entities` reduce internal wait delay from 60 to 3 seconds. In addition, MongoDB
  TTL monitor thread sleep interval is changed to 3 seconds by configuration. This is needed to reduce the testing time, so
  it can fix in the 50 minutes hard limit used by travis.

The work done by `_fix_tests()` is rolled-back by the `_unfix_tests()` function.