char c_style_string[1001];
memset(c_style_string, '\0', sizeof(c_style_string)); 
std::cin.getline(c_style_string, sizeof(c_style_string));
const char* source_string = "Hello, world!";
strncpy(c_style_string, source_string, sizeof(c_style_string) - 1);
c_style_string[sizeof(c_style_string) - 1] = '\0';
