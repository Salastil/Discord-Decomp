package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;

/* loaded from: classes3.dex */
public final class s0 extends m1 {

    /* renamed from: c, reason: collision with root package name */
    public static final s0 f3234c;

    static {
        Intrinsics.checkNotNullParameter(LongCompanionObject.INSTANCE, "<this>");
        f3234c = new s0(t0.a);
    }

    @Override // bs.a
    public final int e(Object obj) {
        long[] jArr = (long[]) obj;
        Intrinsics.checkNotNullParameter(jArr, "<this>");
        return jArr.length;
    }

    @Override // bs.u, bs.a
    public final void h(CompositeDecoder decoder, int i5, Object obj) {
        r0 builder = (r0) obj;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        Intrinsics.checkNotNullParameter(builder, "builder");
        long decodeLongElement = decoder.decodeLongElement(this.f3216b, i5);
        builder.getClass();
        builder.b(builder.d() + 1);
        long[] jArr = builder.a;
        int i6 = builder.f3233b;
        builder.f3233b = i6 + 1;
        jArr[i6] = decodeLongElement;
    }

    @Override // bs.a
    public final Object i(Object obj) {
        long[] bufferWithData = (long[]) obj;
        Intrinsics.checkNotNullParameter(bufferWithData, "<this>");
        Intrinsics.checkNotNullParameter(bufferWithData, "bufferWithData");
        r0 r0Var = new r0();
        r0Var.a = bufferWithData;
        r0Var.f3233b = bufferWithData.length;
        r0Var.b(10);
        return r0Var;
    }

    @Override // bs.m1
    public final Object l() {
        return new long[0];
    }

    @Override // bs.m1
    public final void m(CompositeEncoder encoder, Object obj, int i5) {
        long[] content = (long[]) obj;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(content, "content");
        for (int i6 = 0; i6 < i5; i6++) {
            encoder.P(this.f3216b, i6, content[i6]);
        }
    }
}
