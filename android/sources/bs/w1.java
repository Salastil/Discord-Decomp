package bs;

import com.discord.activity_invites.RGBAColorModel$$serializer;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KClass;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import kotlinx.serialization.modules.SerializersModule;

/* loaded from: classes3.dex */
public final class w1 implements KSerializer {
    public final /* synthetic */ int a = 1;

    /* renamed from: b, reason: collision with root package name */
    public final KSerializer f3250b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f3251c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f3252d;

    /* renamed from: e, reason: collision with root package name */
    public final SerialDescriptor f3253e;

    public w1(KClass context, RGBAColorModel$$serializer rGBAColorModel$$serializer, KSerializer[] typeArgumentsSerializers) {
        Intrinsics.checkNotNullParameter(context, "serializableClass");
        Intrinsics.checkNotNullParameter(typeArgumentsSerializers, "typeArgumentsSerializers");
        this.f3251c = context;
        this.f3250b = rGBAColorModel$$serializer;
        this.f3252d = kotlin.collections.u.b(typeArgumentsSerializers);
        com.facebook.react.runtime.r rVar = new com.facebook.react.runtime.r(20, this);
        zr.g g6 = com.facebook.imagepipeline.nativecode.c.g("kotlinx.serialization.ContextualSerializer", zr.h.f21431t, new SerialDescriptor[0], rVar);
        Intrinsics.checkNotNullParameter(g6, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        this.f3253e = new zr.b(g6, context);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        switch (this.a) {
            case 0:
                KSerializer kSerializer = (KSerializer) this.f3252d;
                KSerializer kSerializer2 = (KSerializer) this.f3251c;
                Intrinsics.checkNotNullParameter(decoder, "decoder");
                zr.g gVar = (zr.g) this.f3253e;
                CompositeDecoder beginStructure = decoder.beginStructure(gVar);
                boolean decodeSequentially = beginStructure.decodeSequentially();
                KSerializer kSerializer3 = this.f3250b;
                if (decodeSequentially) {
                    Object decodeSerializableElement = beginStructure.decodeSerializableElement(gVar, 0, kSerializer3, null);
                    Object decodeSerializableElement2 = beginStructure.decodeSerializableElement(gVar, 1, kSerializer2, null);
                    Object decodeSerializableElement3 = beginStructure.decodeSerializableElement(gVar, 2, kSerializer, null);
                    beginStructure.endStructure(gVar);
                    return new fo.v(decodeSerializableElement, decodeSerializableElement2, decodeSerializableElement3);
                }
                Object obj = h1.f3191c;
                Object obj2 = obj;
                Object obj3 = obj2;
                Object obj4 = obj3;
                while (true) {
                    int decodeElementIndex = beginStructure.decodeElementIndex(gVar);
                    if (decodeElementIndex == -1) {
                        beginStructure.endStructure(gVar);
                        if (obj2 == obj) {
                            throw new xr.f("Element 'first' is missing");
                        }
                        if (obj3 == obj) {
                            throw new xr.f("Element 'second' is missing");
                        }
                        if (obj4 != obj) {
                            return new fo.v(obj2, obj3, obj4);
                        }
                        throw new xr.f("Element 'third' is missing");
                    }
                    if (decodeElementIndex == 0) {
                        obj2 = beginStructure.decodeSerializableElement(gVar, 0, kSerializer3, null);
                    } else if (decodeElementIndex == 1) {
                        obj3 = beginStructure.decodeSerializableElement(gVar, 1, kSerializer2, null);
                    } else {
                        if (decodeElementIndex != 2) {
                            throw new xr.f(k0.d.i(decodeElementIndex, "Unexpected index "));
                        }
                        obj4 = beginStructure.decodeSerializableElement(gVar, 2, kSerializer, null);
                    }
                }
            default:
                Intrinsics.checkNotNullParameter(decoder, "decoder");
                SerializersModule serializersModule = decoder.getSerializersModule();
                KClass kClass = (KClass) this.f3251c;
                serializersModule.b(kClass, (List) this.f3252d);
                KSerializer kSerializer4 = this.f3250b;
                if (kSerializer4 != null) {
                    return decoder.decodeSerializableValue(kSerializer4);
                }
                Intrinsics.checkNotNullParameter(kClass, "<this>");
                throw new xr.f(h1.j(kClass));
        }
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        switch (this.a) {
            case 0:
                return (zr.g) this.f3253e;
            default:
                return (zr.b) this.f3253e;
        }
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object value) {
        switch (this.a) {
            case 0:
                fo.v value2 = (fo.v) value;
                Intrinsics.checkNotNullParameter(encoder, "encoder");
                Intrinsics.checkNotNullParameter(value2, "value");
                zr.g gVar = (zr.g) this.f3253e;
                CompositeEncoder beginStructure = encoder.beginStructure(gVar);
                beginStructure.g(gVar, 0, this.f3250b, value2.f8840d);
                beginStructure.g(gVar, 1, (KSerializer) this.f3251c, value2.f8841e);
                beginStructure.g(gVar, 2, (KSerializer) this.f3252d, value2.f8842i);
                beginStructure.endStructure(gVar);
                return;
            default:
                Intrinsics.checkNotNullParameter(encoder, "encoder");
                Intrinsics.checkNotNullParameter(value, "value");
                SerializersModule serializersModule = encoder.getSerializersModule();
                KClass kClass = (KClass) this.f3251c;
                serializersModule.b(kClass, (List) this.f3252d);
                KSerializer kSerializer = this.f3250b;
                if (kSerializer != null) {
                    encoder.M(kSerializer, value);
                    return;
                } else {
                    Intrinsics.checkNotNullParameter(kClass, "<this>");
                    throw new xr.f(h1.j(kClass));
                }
        }
    }

    public w1(KSerializer aSerializer, KSerializer bSerializer, KSerializer cSerializer) {
        Intrinsics.checkNotNullParameter(aSerializer, "aSerializer");
        Intrinsics.checkNotNullParameter(bSerializer, "bSerializer");
        Intrinsics.checkNotNullParameter(cSerializer, "cSerializer");
        this.f3250b = aSerializer;
        this.f3251c = bSerializer;
        this.f3252d = cSerializer;
        this.f3253e = com.facebook.imagepipeline.nativecode.c.f("kotlin.Triple", new SerialDescriptor[0], new e1(2, this));
    }
}
