package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class e2 extends m1 {

    /* renamed from: c, reason: collision with root package name */
    public static final e2 f3182c;

    static {
        Intrinsics.checkNotNullParameter(fo.f0.f8814e, "<this>");
        f3182c = new e2(f2.a);
    }

    @Override // bs.a
    public final int e(Object obj) {
        long[] collectionSize = ((fo.g0) obj).f8816d;
        Intrinsics.checkNotNullParameter(collectionSize, "$this$collectionSize");
        return collectionSize.length;
    }

    @Override // bs.u, bs.a
    public final void h(CompositeDecoder decoder, int i5, Object obj) {
        d2 builder = (d2) obj;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        Intrinsics.checkNotNullParameter(builder, "builder");
        long decodeLong = decoder.decodeInlineElement(this.f3216b, i5).decodeLong();
        fo.e0 e0Var = fo.f0.f8814e;
        builder.getClass();
        builder.b(builder.d() + 1);
        long[] jArr = builder.a;
        int i6 = builder.f3177b;
        builder.f3177b = i6 + 1;
        jArr[i6] = decodeLong;
    }

    @Override // bs.a
    public final Object i(Object obj) {
        long[] bufferWithData = ((fo.g0) obj).f8816d;
        Intrinsics.checkNotNullParameter(bufferWithData, "$this$toBuilder");
        Intrinsics.checkNotNullParameter(bufferWithData, "bufferWithData");
        d2 d2Var = new d2();
        d2Var.a = bufferWithData;
        d2Var.f3177b = bufferWithData.length;
        d2Var.b(10);
        return d2Var;
    }

    @Override // bs.m1
    public final Object l() {
        long[] storage = new long[0];
        Intrinsics.checkNotNullParameter(storage, "storage");
        return new fo.g0(storage);
    }

    @Override // bs.m1
    public final void m(CompositeEncoder encoder, Object obj, int i5) {
        long[] content = ((fo.g0) obj).f8816d;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(content, "content");
        for (int i6 = 0; i6 < i5; i6++) {
            Encoder t5 = encoder.t(this.f3216b, i6);
            long j = content[i6];
            fo.e0 e0Var = fo.f0.f8814e;
            t5.O(j);
        }
    }
}
