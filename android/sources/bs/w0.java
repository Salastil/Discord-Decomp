package bs;

import java.util.Map;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class w0 implements KSerializer {
    public final KSerializer a;

    /* renamed from: b, reason: collision with root package name */
    public final KSerializer f3247b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f3248c;

    /* renamed from: d, reason: collision with root package name */
    public final zr.g f3249d;

    public w0(KSerializer kSerializer, KSerializer kSerializer2, byte b10) {
        this.a = kSerializer;
        this.f3247b = kSerializer2;
    }

    public final Object a(Object obj, Object obj2) {
        switch (this.f3248c) {
            case 0:
                return new v0(obj, obj2);
            default:
                return new Pair(obj, obj2);
        }
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Object a;
        Object obj = h1.f3191c;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor descriptor = getDescriptor();
        CompositeDecoder beginStructure = decoder.beginStructure(descriptor);
        boolean decodeSequentially = beginStructure.decodeSequentially();
        KSerializer kSerializer = this.f3247b;
        KSerializer kSerializer2 = this.a;
        if (decodeSequentially) {
            a = a(beginStructure.decodeSerializableElement(getDescriptor(), 0, kSerializer2, null), beginStructure.decodeSerializableElement(getDescriptor(), 1, kSerializer, null));
        } else {
            Object obj2 = obj;
            Object obj3 = obj2;
            while (true) {
                int decodeElementIndex = beginStructure.decodeElementIndex(getDescriptor());
                if (decodeElementIndex != -1) {
                    if (decodeElementIndex == 0) {
                        obj2 = beginStructure.decodeSerializableElement(getDescriptor(), 0, kSerializer2, null);
                    } else {
                        if (decodeElementIndex != 1) {
                            throw new xr.f(k0.d.i(decodeElementIndex, "Invalid index: "));
                        }
                        obj3 = beginStructure.decodeSerializableElement(getDescriptor(), 1, kSerializer, null);
                    }
                } else {
                    if (obj2 == obj) {
                        throw new xr.f("Element 'key' is missing");
                    }
                    if (obj3 == obj) {
                        throw new xr.f("Element 'value' is missing");
                    }
                    a = a(obj2, obj3);
                }
            }
        }
        beginStructure.endStructure(descriptor);
        return a;
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        switch (this.f3248c) {
        }
        return this.f3249d;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        Object key;
        Object value;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        CompositeEncoder beginStructure = encoder.beginStructure(getDescriptor());
        SerialDescriptor descriptor = getDescriptor();
        KSerializer kSerializer = this.a;
        switch (this.f3248c) {
            case 0:
                Map.Entry entry = (Map.Entry) obj;
                Intrinsics.checkNotNullParameter(entry, "<this>");
                key = entry.getKey();
                break;
            default:
                Pair pair = (Pair) obj;
                Intrinsics.checkNotNullParameter(pair, "<this>");
                key = pair.f13474d;
                break;
        }
        beginStructure.g(descriptor, 0, kSerializer, key);
        SerialDescriptor descriptor2 = getDescriptor();
        KSerializer kSerializer2 = this.f3247b;
        switch (this.f3248c) {
            case 0:
                Map.Entry entry2 = (Map.Entry) obj;
                Intrinsics.checkNotNullParameter(entry2, "<this>");
                value = entry2.getValue();
                break;
            default:
                Pair pair2 = (Pair) obj;
                Intrinsics.checkNotNullParameter(pair2, "<this>");
                value = pair2.f13475e;
                break;
        }
        beginStructure.g(descriptor2, 1, kSerializer2, value);
        beginStructure.endStructure(getDescriptor());
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public w0(final KSerializer keySerializer, final KSerializer valueSerializer, int i5) {
        this(keySerializer, valueSerializer, (byte) 0);
        this.f3248c = i5;
        switch (i5) {
            case 1:
                Intrinsics.checkNotNullParameter(keySerializer, "keySerializer");
                Intrinsics.checkNotNullParameter(valueSerializer, "valueSerializer");
                this(keySerializer, valueSerializer, (byte) 0);
                final int i6 = 1;
                this.f3249d = com.facebook.imagepipeline.nativecode.c.f("kotlin.Pair", new SerialDescriptor[0], new Function1() { // from class: bs.u0
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        zr.a buildSerialDescriptor = (zr.a) obj;
                        switch (i6) {
                            case 0:
                                Intrinsics.checkNotNullParameter(buildSerialDescriptor, "$this$buildSerialDescriptor");
                                zr.a.a(buildSerialDescriptor, "key", keySerializer.getDescriptor());
                                zr.a.a(buildSerialDescriptor, "value", valueSerializer.getDescriptor());
                                break;
                            default:
                                Intrinsics.checkNotNullParameter(buildSerialDescriptor, "$this$buildClassSerialDescriptor");
                                zr.a.a(buildSerialDescriptor, "first", keySerializer.getDescriptor());
                                zr.a.a(buildSerialDescriptor, "second", valueSerializer.getDescriptor());
                                break;
                        }
                        return Unit.a;
                    }
                });
                break;
            default:
                Intrinsics.checkNotNullParameter(keySerializer, "keySerializer");
                Intrinsics.checkNotNullParameter(valueSerializer, "valueSerializer");
                final int i10 = 0;
                this.f3249d = com.facebook.imagepipeline.nativecode.c.g("kotlin.collections.Map.Entry", zr.j.f21435v, new SerialDescriptor[0], new Function1() { // from class: bs.u0
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        zr.a buildSerialDescriptor = (zr.a) obj;
                        switch (i10) {
                            case 0:
                                Intrinsics.checkNotNullParameter(buildSerialDescriptor, "$this$buildSerialDescriptor");
                                zr.a.a(buildSerialDescriptor, "key", keySerializer.getDescriptor());
                                zr.a.a(buildSerialDescriptor, "value", valueSerializer.getDescriptor());
                                break;
                            default:
                                Intrinsics.checkNotNullParameter(buildSerialDescriptor, "$this$buildClassSerialDescriptor");
                                zr.a.a(buildSerialDescriptor, "first", keySerializer.getDescriptor());
                                zr.a.a(buildSerialDescriptor, "second", valueSerializer.getDescriptor());
                                break;
                        }
                        return Unit.a;
                    }
                });
                break;
        }
    }
}
