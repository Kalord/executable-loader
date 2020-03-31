#include <iostream>
#include <string>
#include "FileSystem/File.hpp"
#include "Loader/Loader.hpp"

/**
 * Сообщения при запуске программы
 **/
void startMessage()
{
    std::cout << "Executable loader" << std::endl;
}

/**
 * Получение пути до конфигурационного файла
 **/
std::string getConfig()
{
    /**
     * Конфигурационный файл
     **/
    std::string pathToConfig;

    std::cout << "Input - if you want set default path" << std::endl;
    std::cout << "Input path to config: ";

    std::cin >> pathToConfig;

    return pathToConfig;
}

int main()
{
    std::string pathToConfig = getConfig();
    if(pathToConfig == "-") pathToConfig = "config.txt";

    File config(pathToConfig);

    Loader loader(&config);

    loader.load();

    return 0;
}