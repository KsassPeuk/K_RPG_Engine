#ifndef _COMPONENT
#define _COMPONENT

#include "kre_types.hpp"

namespace kre
{
    class Component{
    public:
        Component();
        virtual ~Component();
    protected:
    private:
        id_t _id;

    private:
        Component(Component const& c) = delete;
        Component& operator=(Component const& c) = delete;
    };
}

#endif // _COMPONENT
