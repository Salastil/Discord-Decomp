package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class y1 extends m1 {

    /* renamed from: c, reason: collision with root package name */
    public static final y1 f3258c;

    static {
        Intrinsics.checkNotNullParameter(fo.y.f8843e, "<this>");
        f3258c = new y1(z1.a);
    }

    @Override // bs.a
    public final int e(Object obj) {
        byte[] collectionSize = ((fo.a0) obj).f8804d;
        Intrinsics.checkNotNullParameter(collectionSize, "$this$collectionSize");
        return collectionSize.length;
    }

    @Override // bs.u, bs.a
    public final void h(CompositeDecoder decoder, int i5, Object obj) {
        x1 builder = (x1) obj;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        Intrinsics.checkNotNullParameter(builder, "builder");
        byte decodeByte = decoder.decodeInlineElement(this.f3216b, i5).decodeByte();
        fo.x xVar = fo.y.f8843e;
        builder.getClass();
        builder.b(builder.d() + 1);
        byte[] bArr = builder.a;
        int i6 = builder.f3256b;
        builder.f3256b = i6 + 1;
        bArr[i6] = decodeByte;
    }

    @Override // bs.a
    public final Object i(Object obj) {
        byte[] bufferWithData = ((fo.a0) obj).f8804d;
        Intrinsics.checkNotNullParameter(bufferWithData, "$this$toBuilder");
        Intrinsics.checkNotNullParameter(bufferWithData, "bufferWithData");
        x1 x1Var = new x1();
        x1Var.a = bufferWithData;
        x1Var.f3256b = bufferWithData.length;
        x1Var.b(10);
        return x1Var;
    }

    @Override // bs.m1
    public final Object l() {
        byte[] storage = new byte[0];
        Intrinsics.checkNotNullParameter(storage, "storage");
        return new fo.a0(storage);
    }

    @Override // bs.m1
    public final void m(CompositeEncoder encoder, Object obj, int i5) {
        byte[] content = ((fo.a0) obj).f8804d;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(content, "content");
        for (int i6 = 0; i6 < i5; i6++) {
            Encoder t5 = encoder.t(this.f3216b, i6);
            byte b10 = content[i6];
            fo.x xVar = fo.y.f8843e;
            t5.j(b10);
        }
    }
}
