package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class b2 extends m1 {

    /* renamed from: c, reason: collision with root package name */
    public static final b2 f3164c;

    static {
        Intrinsics.checkNotNullParameter(fo.c0.f8809e, "<this>");
        f3164c = new b2(c2.a);
    }

    @Override // bs.a
    public final int e(Object obj) {
        int[] collectionSize = ((fo.d0) obj).f8811d;
        Intrinsics.checkNotNullParameter(collectionSize, "$this$collectionSize");
        return collectionSize.length;
    }

    @Override // bs.u, bs.a
    public final void h(CompositeDecoder decoder, int i5, Object obj) {
        a2 builder = (a2) obj;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        Intrinsics.checkNotNullParameter(builder, "builder");
        int decodeInt = decoder.decodeInlineElement(this.f3216b, i5).decodeInt();
        fo.b0 b0Var = fo.c0.f8809e;
        builder.getClass();
        builder.b(builder.d() + 1);
        int[] iArr = builder.a;
        int i6 = builder.f3161b;
        builder.f3161b = i6 + 1;
        iArr[i6] = decodeInt;
    }

    @Override // bs.a
    public final Object i(Object obj) {
        int[] bufferWithData = ((fo.d0) obj).f8811d;
        Intrinsics.checkNotNullParameter(bufferWithData, "$this$toBuilder");
        Intrinsics.checkNotNullParameter(bufferWithData, "bufferWithData");
        a2 a2Var = new a2();
        a2Var.a = bufferWithData;
        a2Var.f3161b = bufferWithData.length;
        a2Var.b(10);
        return a2Var;
    }

    @Override // bs.m1
    public final Object l() {
        int[] storage = new int[0];
        Intrinsics.checkNotNullParameter(storage, "storage");
        return new fo.d0(storage);
    }

    @Override // bs.m1
    public final void m(CompositeEncoder encoder, Object obj, int i5) {
        int[] content = ((fo.d0) obj).f8811d;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(content, "content");
        for (int i6 = 0; i6 < i5; i6++) {
            Encoder t5 = encoder.t(this.f3216b, i6);
            int i10 = content[i6];
            fo.b0 b0Var = fo.c0.f8809e;
            t5.K(i10);
        }
    }
}
