if(EXISTS "/mnt/c/Users/Tomás Ghiglione/Desktop/FACULTAD/Algoritmos 2/TPGrupal/tpg-1c2024-stars/build/tests/diccionario/diccionario_test[1]_tests.cmake")
  include("/mnt/c/Users/Tomás Ghiglione/Desktop/FACULTAD/Algoritmos 2/TPGrupal/tpg-1c2024-stars/build/tests/diccionario/diccionario_test[1]_tests.cmake")
else()
  add_test(diccionario_test_NOT_BUILT diccionario_test_NOT_BUILT)
endif()
