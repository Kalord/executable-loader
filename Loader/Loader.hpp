#pragma once

#include "../FileSystem/File.hpp"

/**
 * Загрузчик исполняемых файлов
 * 
 * Загрузчик получает список путей до исполняемых файлов из 
 * конфигурационного файла
 * Пример конфигурационного файла:
 *      /home/user/folder/start.out
 *      /home/user/game/a.out
 *      /home/user/foo/a.out
 **/
class Loader
{
private:
    File* config;
public:
    Loader(File* config);

    /**
     * Выполнить загрузку
     **/
    void load();
};