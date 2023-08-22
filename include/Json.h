#ifndef OPEN_JSON_JSON_H
#define OPEN_JSON_JSON_H

namespace open_json {
    class Json {
    public:
        Json();

        virtual ~Json();

        class Value {
        public:
            Value();

            virtual ~Value();
        };
    };
}


#endif //OPEN_JSON_JSON_H
