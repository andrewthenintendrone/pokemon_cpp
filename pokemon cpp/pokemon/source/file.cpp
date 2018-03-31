#include "file.h"
#include <iostream>

namespace andrew
{
    file::file(const std::string& fileName)
    {
        m_fileName = fileName;

        m_file.open(m_fileName, std::ios_base::binary | std::ios_base::in | std::ios_base::ate | std::ios_base::_Nocreate);

        if (!m_file.is_open())
        {
            std::cout << "Failed to open " << m_fileName << " for reading." << std::endl;
            return;
        }

        std::cout << "Opened " << m_fileName << std::endl;

        m_fileLength = (long)m_file.tellg();
        std::cout << "fileLength is " << m_fileLength << std::endl;
        m_file.seekg(0, std::ios_base::beg);
    }

    file::file(char* fileName)
    {
        file(std::string(fileName));
    }

    file::~file()
    {
        if (m_file.is_open())
        {
            m_file.close();
        }
    }

    long file::getFileLength()
    {
        return m_fileLength;
    }

    void file::close()
    {
        if (m_file.is_open())
        {
            m_file.close();
        }
    }
}
