package bs;

import kotlin.jvm.internal.BooleanCompanionObject;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;

/* loaded from: classes3.dex */
public final class f extends m1 {

    /* renamed from: c, reason: collision with root package name */
    public static final f f3183c;

    static {
        Intrinsics.checkNotNullParameter(BooleanCompanionObject.INSTANCE, "<this>");
        f3183c = new f(g.a);
    }

    @Override // bs.a
    public final int e(Object obj) {
        boolean[] zArr = (boolean[]) obj;
        Intrinsics.checkNotNullParameter(zArr, "<this>");
        return zArr.length;
    }

    @Override // bs.u, bs.a
    public final void h(CompositeDecoder decoder, int i5, Object obj) {
        e builder = (e) obj;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        Intrinsics.checkNotNullParameter(builder, "builder");
        boolean decodeBooleanElement = decoder.decodeBooleanElement(this.f3216b, i5);
        builder.getClass();
        builder.b(builder.d() + 1);
        boolean[] zArr = builder.a;
        int i6 = builder.f3178b;
        builder.f3178b = i6 + 1;
        zArr[i6] = decodeBooleanElement;
    }

    @Override // bs.a
    public final Object i(Object obj) {
        boolean[] bufferWithData = (boolean[]) obj;
        Intrinsics.checkNotNullParameter(bufferWithData, "<this>");
        Intrinsics.checkNotNullParameter(bufferWithData, "bufferWithData");
        e eVar = new e();
        eVar.a = bufferWithData;
        eVar.f3178b = bufferWithData.length;
        eVar.b(10);
        return eVar;
    }

    @Override // bs.m1
    public final Object l() {
        return new boolean[0];
    }

    @Override // bs.m1
    public final void m(CompositeEncoder encoder, Object obj, int i5) {
        boolean[] content = (boolean[]) obj;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(content, "content");
        for (int i6 = 0; i6 < i5; i6++) {
            encoder.x(this.f3216b, i6, content[i6]);
        }
    }
}
