#ifndef PHP_MARKDOWN_H
#define PHP_MARKDOWN_H 1

#define PHP_MARKDOWN_VERSION "1.01"
#define PHP_MARKDOWN_EXTNAME "markdown"

extern zend_module_entry markdown_module_entry;
#define markdown_module_ptr &markdown_module_entry

PHP_MINIT_FUNCTION(markdown);
PHP_MSHUTDOWN_FUNCTION(markdown);
PHP_RINIT_FUNCTION(markdown);
PHP_RSHUTDOWN_FUNCTION(markdown);
PHP_MINFO_FUNCTION(markdown);

PHP_FUNCTION(markdown_parse);
PHP_FUNCTION(markdown_parse_file);
PHP_FUNCTION(markdown_parse_url);

#define phpext_markdown_ptr markdown_module_ptr

#endif // PHP_MARKDOWN_H
