package bs;

import kotlin.jvm.internal.IntCompanionObject;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;

/* loaded from: classes3.dex */
public final class n0 extends m1 {

    /* renamed from: c, reason: collision with root package name */
    public static final n0 f3218c;

    static {
        Intrinsics.checkNotNullParameter(IntCompanionObject.INSTANCE, "<this>");
        f3218c = new n0(o0.a);
    }

    @Override // bs.a
    public final int e(Object obj) {
        int[] iArr = (int[]) obj;
        Intrinsics.checkNotNullParameter(iArr, "<this>");
        return iArr.length;
    }

    @Override // bs.u, bs.a
    public final void h(CompositeDecoder decoder, int i5, Object obj) {
        m0 builder = (m0) obj;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        Intrinsics.checkNotNullParameter(builder, "builder");
        int decodeIntElement = decoder.decodeIntElement(this.f3216b, i5);
        builder.getClass();
        builder.b(builder.d() + 1);
        int[] iArr = builder.a;
        int i6 = builder.f3215b;
        builder.f3215b = i6 + 1;
        iArr[i6] = decodeIntElement;
    }

    @Override // bs.a
    public final Object i(Object obj) {
        int[] bufferWithData = (int[]) obj;
        Intrinsics.checkNotNullParameter(bufferWithData, "<this>");
        Intrinsics.checkNotNullParameter(bufferWithData, "bufferWithData");
        m0 m0Var = new m0();
        m0Var.a = bufferWithData;
        m0Var.f3215b = bufferWithData.length;
        m0Var.b(10);
        return m0Var;
    }

    @Override // bs.m1
    public final Object l() {
        return new int[0];
    }

    @Override // bs.m1
    public final void m(CompositeEncoder encoder, Object obj, int i5) {
        int[] content = (int[]) obj;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(content, "content");
        for (int i6 = 0; i6 < i5; i6++) {
            encoder.n(i6, content[i6], this.f3216b);
        }
    }
}
