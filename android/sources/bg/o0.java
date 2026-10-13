package bg;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes3.dex */
public final class o0 extends q0 {

    /* renamed from: e, reason: collision with root package name */
    public final char[] f2979e;

    public o0(n0 n0Var) {
        super(n0Var, (Character) null);
        this.f2979e = new char[IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING];
        char[] cArr = n0Var.f2969b;
        if (cArr.length != 16) {
            throw new IllegalArgumentException();
        }
        for (int i5 = 0; i5 < 256; i5++) {
            char[] cArr2 = this.f2979e;
            cArr2[i5] = cArr[i5 >>> 4];
            cArr2[i5 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER] = cArr[i5 & 15];
        }
    }

    @Override // bg.q0
    public final void a(StringBuilder sb2, byte[] bArr, int i5) {
        b.m(0, i5, bArr.length);
        for (int i6 = 0; i6 < i5; i6++) {
            int i10 = bArr[i6] & 255;
            char[] cArr = this.f2979e;
            sb2.append(cArr[i10]);
            sb2.append(cArr[i10 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER]);
        }
    }
}
