#include "Loader.hpp"

Loader::Loader(File* config) : config(config)
{

}

/**
 * Выполнить загрузку
 **/
void Loader::load()
{
    std::string path = this->config->readLine();

    while(!path.empty())
    {
        system(path.c_str());
        path = this->config->readLine();
    }
}