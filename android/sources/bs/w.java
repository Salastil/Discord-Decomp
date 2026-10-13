package bs;

import kotlin.jvm.internal.DoubleCompanionObject;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;

/* loaded from: classes3.dex */
public final class w extends m1 {

    /* renamed from: c, reason: collision with root package name */
    public static final w f3246c;

    static {
        Intrinsics.checkNotNullParameter(DoubleCompanionObject.INSTANCE, "<this>");
        f3246c = new w(x.a);
    }

    @Override // bs.a
    public final int e(Object obj) {
        double[] dArr = (double[]) obj;
        Intrinsics.checkNotNullParameter(dArr, "<this>");
        return dArr.length;
    }

    @Override // bs.u, bs.a
    public final void h(CompositeDecoder decoder, int i5, Object obj) {
        v builder = (v) obj;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        Intrinsics.checkNotNullParameter(builder, "builder");
        double decodeDoubleElement = decoder.decodeDoubleElement(this.f3216b, i5);
        builder.getClass();
        builder.b(builder.d() + 1);
        double[] dArr = builder.a;
        int i6 = builder.f3242b;
        builder.f3242b = i6 + 1;
        dArr[i6] = decodeDoubleElement;
    }

    @Override // bs.a
    public final Object i(Object obj) {
        double[] bufferWithData = (double[]) obj;
        Intrinsics.checkNotNullParameter(bufferWithData, "<this>");
        Intrinsics.checkNotNullParameter(bufferWithData, "bufferWithData");
        v vVar = new v();
        vVar.a = bufferWithData;
        vVar.f3242b = bufferWithData.length;
        vVar.b(10);
        return vVar;
    }

    @Override // bs.m1
    public final Object l() {
        return new double[0];
    }

    @Override // bs.m1
    public final void m(CompositeEncoder encoder, Object obj, int i5) {
        double[] content = (double[]) obj;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(content, "content");
        for (int i6 = 0; i6 < i5; i6++) {
            encoder.N(this.f3216b, i6, content[i6]);
        }
    }
}
