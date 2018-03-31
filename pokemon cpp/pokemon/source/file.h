#pragma once
#include <fstream>
#include <string>

namespace andrew
{
    class file
    {
    public:
        file(const std::string& fileName);
        file(char* fileName);
        ~file();

        template<typename T>
        inline T read()
        {
            T data;

            m_file.read(reinterpret_cast<char*>(&data), sizeof(T));

            return data;
        }

        long getFileLength();

        void close();

    private:
        std::string m_fileName;
        std::fstream m_file;
        long m_fileLength;
    };
}
