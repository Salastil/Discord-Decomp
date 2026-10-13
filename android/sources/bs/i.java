package bs;

import kotlin.jvm.internal.ByteCompanionObject;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;

/* loaded from: classes3.dex */
public final class i extends m1 {

    /* renamed from: c, reason: collision with root package name */
    public static final i f3193c;

    static {
        Intrinsics.checkNotNullParameter(ByteCompanionObject.INSTANCE, "<this>");
        f3193c = new i(j.a);
    }

    @Override // bs.a
    public final int e(Object obj) {
        byte[] bArr = (byte[]) obj;
        Intrinsics.checkNotNullParameter(bArr, "<this>");
        return bArr.length;
    }

    @Override // bs.u, bs.a
    public final void h(CompositeDecoder decoder, int i5, Object obj) {
        h builder = (h) obj;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        Intrinsics.checkNotNullParameter(builder, "builder");
        byte decodeByteElement = decoder.decodeByteElement(this.f3216b, i5);
        builder.getClass();
        builder.b(builder.d() + 1);
        byte[] bArr = builder.a;
        int i6 = builder.f3189b;
        builder.f3189b = i6 + 1;
        bArr[i6] = decodeByteElement;
    }

    @Override // bs.a
    public final Object i(Object obj) {
        byte[] bufferWithData = (byte[]) obj;
        Intrinsics.checkNotNullParameter(bufferWithData, "<this>");
        Intrinsics.checkNotNullParameter(bufferWithData, "bufferWithData");
        h hVar = new h();
        hVar.a = bufferWithData;
        hVar.f3189b = bufferWithData.length;
        hVar.b(10);
        return hVar;
    }

    @Override // bs.m1
    public final Object l() {
        return new byte[0];
    }

    @Override // bs.m1
    public final void m(CompositeEncoder encoder, Object obj, int i5) {
        byte[] content = (byte[]) obj;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(content, "content");
        for (int i6 = 0; i6 < i5; i6++) {
            encoder.C(this.f3216b, i6, content[i6]);
        }
    }
}
