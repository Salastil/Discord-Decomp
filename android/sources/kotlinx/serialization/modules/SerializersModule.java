package kotlinx.serialization.modules;

import a5.n;
import java.util.List;
import kotlin.collections.m0;
import kotlin.reflect.KClass;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.KSerializer;

/* loaded from: classes3.dex */
public abstract class SerializersModule {
    public static KSerializer c(SerializersModule serializersModule, KClass kClass) {
        serializersModule.b(kClass, m0.f13512d);
        return null;
    }

    public abstract void a(n nVar);

    public abstract void b(KClass kClass, List list);

    public abstract boolean d();

    public abstract DeserializationStrategy e(String str, KClass kClass);

    public abstract KSerializer f(KClass kClass, Object obj);
}
