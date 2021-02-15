SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" >/dev/null 2>&1 && pwd)"
pushd $SCRIPT_DIR
cd build/bin
if [[ "$1" != "tests" ]]; then
    if [[ -f static-vars-static-lib.html ]]; then
        source ../activate.sh
        emrun ./static-vars-static-lib.html
        source ../deactivate.sh
    else
        ./static-vars-static-lib
    fi
else
    ./static-vars-static-libTest
fi
popd
