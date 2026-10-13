package bs;

import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.Decoder;

/* loaded from: classes3.dex */
public abstract class a implements KSerializer {
    public abstract Object a();

    public abstract int b(Object obj);

    public abstract void c(int i5, Object obj);

    public abstract Iterator d(Object obj);

    @Override // kotlinx.serialization.DeserializationStrategy
    public Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        return f(decoder);
    }

    public abstract int e(Object obj);

    public final Object f(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        Object a = a();
        int b10 = b(a);
        CompositeDecoder beginStructure = decoder.beginStructure(getDescriptor());
        if (!beginStructure.decodeSequentially()) {
            while (true) {
                int decodeElementIndex = beginStructure.decodeElementIndex(getDescriptor());
                if (decodeElementIndex == -1) {
                    break;
                }
                h(beginStructure, decodeElementIndex + b10, a);
            }
        } else {
            int decodeCollectionSize = beginStructure.decodeCollectionSize(getDescriptor());
            c(decodeCollectionSize, a);
            g(beginStructure, a, b10, decodeCollectionSize);
        }
        beginStructure.endStructure(getDescriptor());
        return j(a);
    }

    public abstract void g(CompositeDecoder compositeDecoder, Object obj, int i5, int i6);

    public abstract void h(CompositeDecoder compositeDecoder, int i5, Object obj);

    public abstract Object i(Object obj);

    public abstract Object j(Object obj);
}
