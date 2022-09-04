// The lookup process for icons in Rofi's window mode is based on the
// lowercase class string of each window. Some programs like Alacritty and
// Gimp do not get the correct icons from this process and two parallel
// lists are used as a hacky workaround for these cases.

#define CLASS_NAMES_CNT sizeof(CLASS_NAMES)/sizeof(*CLASS_NAMES)

const char* CLASS_NAMES[] = {
  "alacritty",
  "gimp-2.10"
};

char* ICON_NAMES[] = {
  "Alacritty",
  "gimp"
};
