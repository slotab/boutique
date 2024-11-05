cmake_minimum_required(VERSION 3.29)
project(Boutique_atelier_3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Boutique_atelier_3
    Client.cpp
    Client.h
    Employe.cpp
    Employe.h
    Gerant.cpp
    Gerant.h
    main.cpp
    Personne.cpp
    Personne.h
    Produit.cpp
    Produit.h)
