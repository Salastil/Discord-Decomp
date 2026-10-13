package bs;

import kotlin.jvm.internal.CharCompanionObject;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;

/* loaded from: classes3.dex */
public final class o extends m1 {

    /* renamed from: c, reason: collision with root package name */
    public static final o f3220c;

    static {
        Intrinsics.checkNotNullParameter(CharCompanionObject.INSTANCE, "<this>");
        f3220c = new o(p.a);
    }

    @Override // bs.a
    public final int e(Object obj) {
        char[] cArr = (char[]) obj;
        Intrinsics.checkNotNullParameter(cArr, "<this>");
        return cArr.length;
    }

    @Override // bs.u, bs.a
    public final void h(CompositeDecoder decoder, int i5, Object obj) {
        n builder = (n) obj;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        Intrinsics.checkNotNullParameter(builder, "builder");
        char decodeCharElement = decoder.decodeCharElement(this.f3216b, i5);
        builder.getClass();
        builder.b(builder.d() + 1);
        char[] cArr = builder.a;
        int i6 = builder.f3217b;
        builder.f3217b = i6 + 1;
        cArr[i6] = decodeCharElement;
    }

    @Override // bs.a
    public final Object i(Object obj) {
        char[] bufferWithData = (char[]) obj;
        Intrinsics.checkNotNullParameter(bufferWithData, "<this>");
        Intrinsics.checkNotNullParameter(bufferWithData, "bufferWithData");
        n nVar = new n();
        nVar.a = bufferWithData;
        nVar.f3217b = bufferWithData.length;
        nVar.b(10);
        return nVar;
    }

    @Override // bs.m1
    public final Object l() {
        return new char[0];
    }

    @Override // bs.m1
    public final void m(CompositeEncoder encoder, Object obj, int i5) {
        char[] content = (char[]) obj;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(content, "content");
        for (int i6 = 0; i6 < i5; i6++) {
            encoder.J(this.f3216b, i6, content[i6]);
        }
    }
}
