project('fizzbuzz', 'cpp',
        default_options : ['cpp_std=c++14'], 
        version : '0.0.1',
        license : 'MIT')

design_sources = ['src/main.cpp'
    ,'src/pattern.cpp']

elf = executable('fizzbuz',
    design_sources,
    install : false)

subdir('test')

