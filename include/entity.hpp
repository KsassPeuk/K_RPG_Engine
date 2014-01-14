#ifndef _ENTITY
#define _ENTITY

#include <vector>
#include "kre_types.hpp"
#include "component.hpp"

namespace kre{
    class Entity
    {
        public:
            /** Default constructor */
            Entity();
            /** Default destructor */
            virtual ~Entity();
        protected:
        private:
            id_t id; //!< Member variable "id"
            std::vector<Component> components; //!< Member variable "components"
    };
}

#endif // _ENTITY
