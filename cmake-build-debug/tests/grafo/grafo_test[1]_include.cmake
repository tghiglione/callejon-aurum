if(EXISTS "/mnt/c/Users/Tomás Ghiglione/Desktop/FACULTAD/Algoritmos 2/TPGrupal/tpg-1c2024-stars/cmake-build-debug/tests/grafo/grafo_test[1]_tests.cmake")
  include("/mnt/c/Users/Tomás Ghiglione/Desktop/FACULTAD/Algoritmos 2/TPGrupal/tpg-1c2024-stars/cmake-build-debug/tests/grafo/grafo_test[1]_tests.cmake")
else()
  add_test(grafo_test_NOT_BUILT grafo_test_NOT_BUILT)
endif()
