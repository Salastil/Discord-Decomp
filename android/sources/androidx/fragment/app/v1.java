package androidx.fragment.app;

import android.util.Log;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.Writer;

/* loaded from: classes.dex */
public final class v1 extends Writer {

    /* renamed from: e, reason: collision with root package name */
    public final StringBuilder f2112e = new StringBuilder(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);

    /* renamed from: d, reason: collision with root package name */
    public final String f2111d = "FragmentManager";

    public final void c() {
        StringBuilder sb2 = this.f2112e;
        if (sb2.length() > 0) {
            Log.d(this.f2111d, sb2.toString());
            sb2.delete(0, sb2.length());
        }
    }

    @Override // java.io.Writer, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        c();
    }

    @Override // java.io.Writer, java.io.Flushable
    public final void flush() {
        c();
    }

    @Override // java.io.Writer
    public final void write(char[] cArr, int i5, int i6) {
        for (int i10 = 0; i10 < i6; i10++) {
            char c6 = cArr[i5 + i10];
            if (c6 == '\n') {
                c();
            } else {
                this.f2112e.append(c6);
            }
        }
    }
}
