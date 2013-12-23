/*
 * Prismatic input adapter
 *
 * Base class for all input adapters
 */
#ifdef __PRISMATIC_INPUT_ADAPTER_HPP
#define __PRISMATIC_INPUT_ADAPTER_HPP

class PrismaticInputAdapter
{
  public:
    void CleanUp();
    static void* Factory(const std::string adapter_name);
  private:

};
#endif
