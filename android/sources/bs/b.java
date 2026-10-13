package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlin.reflect.KClass;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public abstract class b implements KSerializer {
    public DeserializationStrategy a(CompositeDecoder decoder, String str) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        return decoder.getSerializersModule().e(str, c());
    }

    public KSerializer b(Encoder encoder, Object value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        return encoder.getSerializersModule().f(c(), value);
    }

    public abstract KClass c();

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r5v2, types: [T, java.lang.String] */
    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Object obj;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor descriptor = getDescriptor();
        CompositeDecoder beginStructure = decoder.beginStructure(descriptor);
        Ref.ObjectRef objectRef = new Ref.ObjectRef();
        if (beginStructure.decodeSequentially()) {
            obj = beginStructure.decodeSerializableElement(getDescriptor(), 1, ys.l.k(this, beginStructure, beginStructure.decodeStringElement(getDescriptor(), 0)), null);
        } else {
            Object obj2 = null;
            while (true) {
                int decodeElementIndex = beginStructure.decodeElementIndex(getDescriptor());
                if (decodeElementIndex != -1) {
                    if (decodeElementIndex == 0) {
                        objectRef.element = beginStructure.decodeStringElement(getDescriptor(), decodeElementIndex);
                    } else {
                        if (decodeElementIndex != 1) {
                            StringBuilder sb2 = new StringBuilder("Invalid index in polymorphic deserialization of ");
                            String str = (String) objectRef.element;
                            if (str == null) {
                                str = "unknown class";
                            }
                            sb2.append(str);
                            sb2.append("\n Expected 0, 1 or DECODE_DONE(-1), but found ");
                            sb2.append(decodeElementIndex);
                            throw new xr.f(sb2.toString());
                        }
                        T t5 = objectRef.element;
                        if (t5 == 0) {
                            throw new IllegalArgumentException("Cannot read polymorphic value before its type token");
                        }
                        objectRef.element = t5;
                        obj2 = beginStructure.decodeSerializableElement(getDescriptor(), decodeElementIndex, ys.l.k(this, beginStructure, (String) t5), null);
                    }
                } else {
                    if (obj2 == null) {
                        throw new IllegalArgumentException(("Polymorphic value has not been read for class " + ((String) objectRef.element)).toString());
                    }
                    Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type T of kotlinx.serialization.internal.AbstractPolymorphicSerializer");
                    obj = obj2;
                }
            }
        }
        beginStructure.endStructure(descriptor);
        return obj;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        KSerializer l6 = ys.l.l(this, encoder, value);
        SerialDescriptor descriptor = getDescriptor();
        CompositeEncoder beginStructure = encoder.beginStructure(descriptor);
        beginStructure.y(getDescriptor(), 0, l6.getDescriptor().a());
        SerialDescriptor descriptor2 = getDescriptor();
        Intrinsics.checkNotNull(l6, "null cannot be cast to non-null type kotlinx.serialization.SerializationStrategy<T of kotlinx.serialization.internal.Platform_commonKt.cast>");
        beginStructure.g(descriptor2, 1, l6, value);
        beginStructure.endStructure(descriptor);
    }
}
