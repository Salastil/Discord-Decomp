package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.ShortCompanionObject;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;

/* loaded from: classes3.dex */
public final class t1 extends m1 {

    /* renamed from: c, reason: collision with root package name */
    public static final t1 f3237c;

    static {
        Intrinsics.checkNotNullParameter(ShortCompanionObject.INSTANCE, "<this>");
        f3237c = new t1(u1.a);
    }

    @Override // bs.a
    public final int e(Object obj) {
        short[] sArr = (short[]) obj;
        Intrinsics.checkNotNullParameter(sArr, "<this>");
        return sArr.length;
    }

    @Override // bs.u, bs.a
    public final void h(CompositeDecoder decoder, int i5, Object obj) {
        s1 builder = (s1) obj;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        Intrinsics.checkNotNullParameter(builder, "builder");
        short decodeShortElement = decoder.decodeShortElement(this.f3216b, i5);
        builder.getClass();
        builder.b(builder.d() + 1);
        short[] sArr = builder.a;
        int i6 = builder.f3235b;
        builder.f3235b = i6 + 1;
        sArr[i6] = decodeShortElement;
    }

    @Override // bs.a
    public final Object i(Object obj) {
        short[] bufferWithData = (short[]) obj;
        Intrinsics.checkNotNullParameter(bufferWithData, "<this>");
        Intrinsics.checkNotNullParameter(bufferWithData, "bufferWithData");
        s1 s1Var = new s1();
        s1Var.a = bufferWithData;
        s1Var.f3235b = bufferWithData.length;
        s1Var.b(10);
        return s1Var;
    }

    @Override // bs.m1
    public final Object l() {
        return new short[0];
    }

    @Override // bs.m1
    public final void m(CompositeEncoder encoder, Object obj, int i5) {
        short[] content = (short[]) obj;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(content, "content");
        for (int i6 = 0; i6 < i5; i6++) {
            encoder.r(this.f3216b, i6, content[i6]);
        }
    }
}
