package cs;

import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import kotlinx.serialization.json.JsonElement;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public abstract class f implements KSerializer {

    @NotNull
    private final KClass baseClass;

    @NotNull
    private final SerialDescriptor descriptor;

    public f(KClass baseClass) {
        zr.g g6;
        Intrinsics.checkNotNullParameter(baseClass, "baseClass");
        this.baseClass = baseClass;
        g6 = com.facebook.imagepipeline.nativecode.c.g("JsonContentPolymorphicSerializer<" + baseClass.getSimpleName() + '>', zr.c.f21414u, new SerialDescriptor[0], new kr.n(27));
        this.descriptor = g6;
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final Object deserialize(@NotNull Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        g c6 = com.facebook.imagepipeline.nativecode.c.c(decoder);
        JsonElement a = c6.a();
        DeserializationStrategy selectDeserializer = selectDeserializer(a);
        Intrinsics.checkNotNull(selectDeserializer, "null cannot be cast to non-null type kotlinx.serialization.KSerializer<T of kotlinx.serialization.json.JsonContentPolymorphicSerializer>");
        return c6.b().a((KSerializer) selectDeserializer, a);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public SerialDescriptor getDescriptor() {
        return this.descriptor;
    }

    public abstract DeserializationStrategy selectDeserializer(JsonElement jsonElement);

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull Object value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        KSerializer f2 = encoder.getSerializersModule().f(this.baseClass, value);
        if (f2 == null) {
            KSerializer D = zk.a.D(Reflection.getOrCreateKotlinClass(value.getClass()));
            if (D == null) {
                KClass orCreateKotlinClass = Reflection.getOrCreateKotlinClass(value.getClass());
                KClass kClass = this.baseClass;
                String simpleName = orCreateKotlinClass.getSimpleName();
                if (simpleName == null) {
                    simpleName = String.valueOf(orCreateKotlinClass);
                }
                throw new xr.f(s4.h.g("Class '", simpleName, "' is not registered for polymorphic serialization ", "in the scope of '" + kClass.getSimpleName() + '\'', ".\nMark the base class as 'sealed' or register the serializer explicitly."));
            }
            f2 = D;
        }
        f2.serialize(encoder, value);
    }
}
