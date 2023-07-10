#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fx;
    int nletters;
    int rwr;

    if (!filename)
        return (-1);

    fx = open(filename, O_WRONLY | O_APPEND);

    if (fx == -1)
        return (-1);

    if (text_content)
    {
        for (nletters = 0; text_content[nletters]; nletters++)
            ;

        rwr = write(fx, text_content, nletters);

        if (rwr == -1)
            return (-1);
    }

    close(fx);

    return (1);
}

