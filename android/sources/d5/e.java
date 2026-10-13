package d5;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.ByteArrayOutputStream;

/* loaded from: classes.dex */
public final class e extends ByteArrayOutputStream {

    /* renamed from: d, reason: collision with root package name */
    public final a f7431d;

    public e(a aVar, int i5) {
        this.f7431d = aVar;
        ((ByteArrayOutputStream) this).buf = aVar.a(Math.max(i5, IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER));
    }

    public final void c(int i5) {
        int i6 = ((ByteArrayOutputStream) this).count;
        if (i6 + i5 <= ((ByteArrayOutputStream) this).buf.length) {
            return;
        }
        int i10 = (i6 + i5) * 2;
        a aVar = this.f7431d;
        byte[] a = aVar.a(i10);
        System.arraycopy(((ByteArrayOutputStream) this).buf, 0, a, 0, ((ByteArrayOutputStream) this).count);
        aVar.b(((ByteArrayOutputStream) this).buf);
        ((ByteArrayOutputStream) this).buf = a;
    }

    @Override // java.io.ByteArrayOutputStream, java.io.OutputStream, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f7431d.b(((ByteArrayOutputStream) this).buf);
        ((ByteArrayOutputStream) this).buf = null;
        super.close();
    }

    public final void finalize() {
        this.f7431d.b(((ByteArrayOutputStream) this).buf);
    }

    @Override // java.io.ByteArrayOutputStream, java.io.OutputStream
    public final synchronized void write(byte[] bArr, int i5, int i6) {
        c(i6);
        super.write(bArr, i5, i6);
    }

    @Override // java.io.ByteArrayOutputStream, java.io.OutputStream
    public final synchronized void write(int i5) {
        c(1);
        super.write(i5);
    }
}
