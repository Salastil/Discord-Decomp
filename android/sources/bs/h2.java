package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class h2 extends m1 {

    /* renamed from: c, reason: collision with root package name */
    public static final h2 f3192c;

    static {
        Intrinsics.checkNotNullParameter(fo.j0.f8817e, "<this>");
        f3192c = new h2(i2.a);
    }

    @Override // bs.a
    public final int e(Object obj) {
        short[] collectionSize = ((fo.k0) obj).f8825d;
        Intrinsics.checkNotNullParameter(collectionSize, "$this$collectionSize");
        return collectionSize.length;
    }

    @Override // bs.u, bs.a
    public final void h(CompositeDecoder decoder, int i5, Object obj) {
        g2 builder = (g2) obj;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        Intrinsics.checkNotNullParameter(builder, "builder");
        short decodeShort = decoder.decodeInlineElement(this.f3216b, i5).decodeShort();
        fo.i0 i0Var = fo.j0.f8817e;
        builder.getClass();
        builder.b(builder.d() + 1);
        short[] sArr = builder.a;
        int i6 = builder.f3188b;
        builder.f3188b = i6 + 1;
        sArr[i6] = decodeShort;
    }

    @Override // bs.a
    public final Object i(Object obj) {
        short[] bufferWithData = ((fo.k0) obj).f8825d;
        Intrinsics.checkNotNullParameter(bufferWithData, "$this$toBuilder");
        Intrinsics.checkNotNullParameter(bufferWithData, "bufferWithData");
        g2 g2Var = new g2();
        g2Var.a = bufferWithData;
        g2Var.f3188b = bufferWithData.length;
        g2Var.b(10);
        return g2Var;
    }

    @Override // bs.m1
    public final Object l() {
        short[] storage = new short[0];
        Intrinsics.checkNotNullParameter(storage, "storage");
        return new fo.k0(storage);
    }

    @Override // bs.m1
    public final void m(CompositeEncoder encoder, Object obj, int i5) {
        short[] content = ((fo.k0) obj).f8825d;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(content, "content");
        for (int i6 = 0; i6 < i5; i6++) {
            Encoder t5 = encoder.t(this.f3216b, i6);
            short s2 = content[i6];
            fo.i0 i0Var = fo.j0.f8817e;
            t5.f(s2);
        }
    }
}
