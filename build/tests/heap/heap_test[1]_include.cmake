if(EXISTS "/home/pili/Desktop/tpg-1c2024-stars/build/tests/heap/heap_test[1]_tests.cmake")
  include("/home/pili/Desktop/tpg-1c2024-stars/build/tests/heap/heap_test[1]_tests.cmake")
else()
  add_test(heap_test_NOT_BUILT heap_test_NOT_BUILT)
endif()
