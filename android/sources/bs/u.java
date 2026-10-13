package bs;

import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public abstract class u extends a {
    public final KSerializer a;

    public u(KSerializer kSerializer) {
        this.a = kSerializer;
    }

    @Override // bs.a
    public final void g(CompositeDecoder decoder, Object obj, int i5, int i6) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        if (i6 < 0) {
            throw new IllegalArgumentException("Size must be known in advance when using READ_ALL");
        }
        for (int i10 = 0; i10 < i6; i10++) {
            h(decoder, i5 + i10, obj);
        }
    }

    @Override // bs.a
    public void h(CompositeDecoder decoder, int i5, Object obj) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        k(i5, obj, decoder.decodeSerializableElement(getDescriptor(), i5, this.a, null));
    }

    public abstract void k(int i5, Object obj, Object obj2);

    @Override // kotlinx.serialization.KSerializer
    public void serialize(Encoder encoder, Object obj) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        int e9 = e(obj);
        SerialDescriptor descriptor = getDescriptor();
        CompositeEncoder E = encoder.E(descriptor, e9);
        Iterator d6 = d(obj);
        for (int i5 = 0; i5 < e9; i5++) {
            E.g(getDescriptor(), i5, this.a, d6.next());
        }
        E.endStructure(descriptor);
    }
}
