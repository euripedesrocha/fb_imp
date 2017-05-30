test_sources = ['test_main.cpp'
        ,'test_fibo.cpp'
        ,'test_pattern.cpp']
    

includes = include_directories('../include/catch/'
        ,'../src/')

tester = executable('catch',
                    test_sources,
                    include_directories : includes,
                    install : false)
