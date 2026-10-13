package nd;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.upstream.DataSource;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class w0 implements ie.h0 {

    /* renamed from: d, reason: collision with root package name */
    public final ie.p f15192d;

    /* renamed from: e, reason: collision with root package name */
    public final ie.s0 f15193e;

    /* renamed from: i, reason: collision with root package name */
    public byte[] f15194i;

    public w0(DataSource dataSource, ie.p pVar) {
        LoadEventInfo.f5429c.getAndIncrement();
        this.f15192d = pVar;
        this.f15193e = new ie.s0(dataSource);
    }

    @Override // ie.h0
    public final void n() {
        ie.s0 s0Var = this.f15193e;
        s0Var.f10755e = 0L;
        try {
            s0Var.o(this.f15192d);
            int i5 = 0;
            while (i5 != -1) {
                int i6 = (int) s0Var.f10755e;
                byte[] bArr = this.f15194i;
                if (bArr == null) {
                    this.f15194i = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET];
                } else if (i6 == bArr.length) {
                    this.f15194i = Arrays.copyOf(bArr, bArr.length * 2);
                }
                byte[] bArr2 = this.f15194i;
                i5 = s0Var.read(bArr2, i6, bArr2.length - i6);
            }
            zo.c0.i(s0Var);
        } catch (Throwable th2) {
            zo.c0.i(s0Var);
            throw th2;
        }
    }

    @Override // ie.h0
    public final void z() {
    }
}
