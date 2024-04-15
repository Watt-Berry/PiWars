extern int undefined(void);
int uses_undefined(void) {
  return undefined() + 1;
}
