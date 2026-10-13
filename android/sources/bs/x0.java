package bs;

import java.util.Iterator;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public abstract class x0 extends a {
    public final KSerializer a;

    /* renamed from: b, reason: collision with root package name */
    public final KSerializer f3255b;

    public x0(KSerializer kSerializer, KSerializer kSerializer2) {
        this.a = kSerializer;
        this.f3255b = kSerializer2;
    }

    @Override // bs.a
    public final void g(CompositeDecoder decoder, Object obj, int i5, int i6) {
        Map builder = (Map) obj;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        Intrinsics.checkNotNullParameter(builder, "builder");
        if (i6 < 0) {
            throw new IllegalArgumentException("Size must be known in advance when using READ_ALL");
        }
        kotlin.ranges.a g6 = yo.j.g(2, yo.j.i(0, i6 * 2));
        int i10 = g6.f13545d;
        int i11 = g6.f13546e;
        int i12 = g6.f13547i;
        if ((i12 <= 0 || i10 > i11) && (i12 >= 0 || i11 > i10)) {
            return;
        }
        while (true) {
            k(decoder, i5 + i10, builder, false);
            if (i10 == i11) {
                return;
            } else {
                i10 += i12;
            }
        }
    }

    @Override // bs.a
    public final /* bridge */ /* synthetic */ void h(CompositeDecoder compositeDecoder, int i5, Object obj) {
        k(compositeDecoder, i5, (Map) obj, true);
    }

    public final void k(CompositeDecoder decoder, int i5, Map builder, boolean z5) {
        int i6;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        Intrinsics.checkNotNullParameter(builder, "builder");
        Object decodeSerializableElement = decoder.decodeSerializableElement(getDescriptor(), i5, this.a, null);
        if (z5) {
            i6 = decoder.decodeElementIndex(getDescriptor());
            if (i6 != i5 + 1) {
                throw new IllegalArgumentException(a3.e.f(i5, i6, "Value must follow key in a map, index for key: ", ", returned index for value: ").toString());
            }
        } else {
            i6 = i5 + 1;
        }
        boolean containsKey = builder.containsKey(decodeSerializableElement);
        KSerializer kSerializer = this.f3255b;
        builder.put(decodeSerializableElement, (!containsKey || (kSerializer.getDescriptor().b() instanceof zr.f)) ? decoder.decodeSerializableElement(getDescriptor(), i6, kSerializer, null) : decoder.decodeSerializableElement(getDescriptor(), i6, kSerializer, kotlin.collections.v0.e(builder, decodeSerializableElement)));
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        int e9 = e(obj);
        SerialDescriptor descriptor = getDescriptor();
        CompositeEncoder E = encoder.E(descriptor, e9);
        Iterator d6 = d(obj);
        int i5 = 0;
        while (d6.hasNext()) {
            Map.Entry entry = (Map.Entry) d6.next();
            Object key = entry.getKey();
            Object value = entry.getValue();
            int i6 = i5 + 1;
            E.g(getDescriptor(), i5, this.a, key);
            i5 += 2;
            E.g(getDescriptor(), i6, this.f3255b, value);
        }
        E.endStructure(descriptor);
    }
}
