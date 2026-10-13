package bs;

import kotlin.jvm.internal.FloatCompanionObject;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;

/* loaded from: classes3.dex */
public final class f0 extends m1 {

    /* renamed from: c, reason: collision with root package name */
    public static final f0 f3184c;

    static {
        Intrinsics.checkNotNullParameter(FloatCompanionObject.INSTANCE, "<this>");
        f3184c = new f0(g0.a);
    }

    @Override // bs.a
    public final int e(Object obj) {
        float[] fArr = (float[]) obj;
        Intrinsics.checkNotNullParameter(fArr, "<this>");
        return fArr.length;
    }

    @Override // bs.u, bs.a
    public final void h(CompositeDecoder decoder, int i5, Object obj) {
        e0 builder = (e0) obj;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        Intrinsics.checkNotNullParameter(builder, "builder");
        float decodeFloatElement = decoder.decodeFloatElement(this.f3216b, i5);
        builder.getClass();
        builder.b(builder.d() + 1);
        float[] fArr = builder.a;
        int i6 = builder.f3179b;
        builder.f3179b = i6 + 1;
        fArr[i6] = decodeFloatElement;
    }

    @Override // bs.a
    public final Object i(Object obj) {
        float[] bufferWithData = (float[]) obj;
        Intrinsics.checkNotNullParameter(bufferWithData, "<this>");
        Intrinsics.checkNotNullParameter(bufferWithData, "bufferWithData");
        e0 e0Var = new e0();
        e0Var.a = bufferWithData;
        e0Var.f3179b = bufferWithData.length;
        e0Var.b(10);
        return e0Var;
    }

    @Override // bs.m1
    public final Object l() {
        return new float[0];
    }

    @Override // bs.m1
    public final void m(CompositeEncoder encoder, Object obj, int i5) {
        float[] content = (float[]) obj;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(content, "content");
        for (int i6 = 0; i6 < i5; i6++) {
            encoder.l(this.f3216b, i6, content[i6]);
        }
    }
}
