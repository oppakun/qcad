// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaSnapTangential.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RMouseEvent.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaSnapEntityBase.h"
                 void REcmaSnapTangential::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RSnapTangential*) 0)));
        protoCreated = true;
    }

    
        // primary base class RSnapEntityBase:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RSnapEntityBase*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class RSnapEntityBase
        REcmaHelper::registerFunction(&engine, proto, getRSnapEntityBase, "getRSnapEntityBase");
        
        // conversion for base class RSnap
        REcmaHelper::registerFunction(&engine, proto, getRSnap, "getRSnap");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
        engine.setDefaultPrototype(
            qMetaTypeId<RSnapTangential*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RSnapTangential",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaSnapTangential::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RSnapTangential(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
    
            // constructor without variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RSnapTangential
                    * cppResult =
                    new
                    RSnapTangential
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RSnapTangential(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaSnapTangential::getRSnapEntityBase(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RSnapEntityBase* cppResult =
                    qscriptvalue_cast<RSnapTangential*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaSnapTangential::getRSnap(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RSnap* cppResult =
                    qscriptvalue_cast<RSnapTangential*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaSnapTangential::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RSnapTangential"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaSnapTangential::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RSnapEntityBase");
    
        list.append("RSnap");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue REcmaSnapTangential::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RSnapTangential* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RSnapTangential(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaSnapTangential::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RSnapTangential* self = getSelf("RSnapTangential", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RSnapTangential* REcmaSnapTangential::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RSnapTangential* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RSnapTangential >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RSnapTangential.%1(): "
                        "This object is not a RSnapTangential").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RSnapTangential* REcmaSnapTangential::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RSnapTangential* selfBase = getSelf(fName, context);
                RSnapTangential* self = dynamic_cast<RSnapTangential*>(selfBase);
                //return REcmaHelper::scriptValueTo<RSnapTangential >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RSnapTangential.%1(): "
                    "This object is not a RSnapTangential").arg(fName),
                    context);
            }

            return self;
            


        }
        