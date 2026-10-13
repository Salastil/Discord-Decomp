package qc;

import androidx.recyclerview.widget.RecyclerView;
import com.google.android.exoplayer2.Format;
import java.io.EOFException;

/* loaded from: classes3.dex */
public final class i implements v {
    public final byte[] a = new byte[RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT];

    @Override // qc.v
    public final int c(ie.k kVar, int i5, boolean z5) {
        byte[] bArr = this.a;
        int read = kVar.read(bArr, 0, Math.min(bArr.length, i5));
        if (read != -1) {
            return read;
        }
        if (z5) {
            return -1;
        }
        throw new EOFException();
    }

    @Override // qc.v
    public final void d(int i5, ke.w wVar) {
        wVar.G(i5);
    }

    @Override // qc.v
    public final void e(Format format) {
    }

    @Override // qc.v
    public final void b(long j, int i5, int i6, int i10, u uVar) {
    }
}
